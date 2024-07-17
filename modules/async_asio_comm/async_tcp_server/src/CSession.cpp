#include "CSession.hpp"
#include "CServer.hpp"
#include "LogicSystem.hpp"

CSession::CSession(boost::asio::io_context &io_context, tcp::socket socket, CServer *server) :
    io_c_(io_context), socket_(std::move(socket)), server_(server), started_(false),
    b_close_(false), b_head_parse_(false)
#if defined(USE_IOTHREAD_POOL)
    ,
    /*IOThreadPool模型使用*/
    strand_(io_c_.get_executor())
#endif // USE_IOTHREAD_POOL
{
    boost::uuids::uuid a_uuid = boost::uuids::random_generator()();
    uuid_ = boost::uuids::to_string(a_uuid);
    recv_head_node_ = std::make_shared<MsgNode>(HEAD_TOTAL_LEN);
}

CSession::~CSession() {
    std::cout << "~CSession destruct" << std::endl;
}

std::string &CSession::GetUuid() {
    return uuid_;
}

std::shared_ptr<CSession> CSession::SharedSelf() {
    return shared_from_this();
}

void CSession::Start() {
    started_ = true;
    std::memset(data_, 0, MAX_LENGTH);
#if defined(USE_IOSERVICE_POOL)
    socket_.async_read_some(boost::asio::buffer(data_, MAX_LENGTH),
                            std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
#endif // USE_IOSERVICE_POOL
#if defined(USE_IOTHREAD_POOL)
    socket_.async_read_some(
        boost::asio::buffer(data_, MAX_LENGTH),
        boost::asio::bind_executor(strand_,
                                   std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf())));
#endif // USE_IOTHREAD_POOL
}

void CSession::Close() {
    if (b_close_) { return; }
    io_c_.post([this, self = shared_from_this()]() {
        if (!started_) return;
        // 取消未完成的异步操作
        socket_.cancel();
        boost::system::error_code ec;
        // 关闭写入/发送
        socket_.shutdown(tcp::socket::shutdown_both, ec);
        if (ec) {
            std::cerr << "shutdown error: " << ec.message() << std::endl;
            // 关闭socket
            socket_.close();
            b_close_ = true;
            std::cout << "closing..." << std::endl;
            started_ = false;
        }
    });

    // _socket.close();
    // _b_close = true;
}

void CSession::Send(char *msg, int max_length, short msg_id) {
    bool pending = false;
    std::lock_guard<std::mutex> lock(send_lock_);
    int send_que_size = send_que_.size();
    if (send_que_size > MAX_SENDQUE) {
        std::cout << "session: " << uuid_ << " send que fulled, size: " << MAX_SENDQUE << std::endl;
        return;
    }

    if (send_que_size > 0) { pending = true; }
    send_que_.push(std::make_shared<SendNode>(msg, max_length, msg_id));
    // 队列还有数据未发送完,不能让用户重复调用async_write，以解决用户层发送顺序问题
    if (pending) { return; }
    auto &msg_node = send_que_.front();
#if defined(USE_IOSERVICE_POOL)
    boost::asio::async_write(socket_, boost::asio::buffer(msg_node->data_, msg_node->total_len_),
                             std::bind(&CSession::HandleWrite, this, _1, SharedSelf()));
#endif // USE_IOSERVICE_POOL
#if defined(USE_IOTHREAD_POOL)
    boost::asio::async_write(
        socket_, boost::asio::buffer(msg_node->data_, msg_node->total_len_),
        boost::asio::bind_executor(strand_,
                                   std::bind(&CSession::HandleWrite, this, _1, SharedSelf())));
#endif // USE_IOTHREAD_POOL
}

void CSession::HandleWrite(const boost::system::error_code &error,
                           std::shared_ptr<CSession> shared_self) {
    if (!error) {
        std::lock_guard<std::mutex> lock(send_lock_);
        // std::cout << "send data: " << send_que_.front()->data_ + HEAD_LENGTH << std::endl;
        send_que_.pop();
        if (!send_que_.empty()) {
            auto &msg_node = send_que_.front();
#if defined(USE_IOSERVICE_POOL)
            boost::asio::async_write(socket_,
                                     boost::asio::buffer(msg_node->data_, msg_node->total_len_),
                                     std::bind(&CSession::HandleWrite, this, _1, SharedSelf()));
#endif // USE_IOSERVICE_POOL
#if defined(USE_IOTHREAD_POOL)
            boost::asio::async_write(
                socket_, boost::asio::buffer(msg_node->data_, msg_node->total_len_),
                boost::asio::bind_executor(
                    strand_, std::bind(&CSession::HandleWrite, this, _1, SharedSelf())));
#endif // USE_IOTHREAD_POOL
        }
    } else {
        std::cout << "HandleWrite Error! Error code = " << error.value()
                  << ". Message: " << error.message() << std::endl;
        Close();
        server_->ClearSession(uuid_);
    }
}

void CSession::HandleRead(const boost::system::error_code &error, size_t bytes_transferred,
                          std::shared_ptr<CSession> shared_self) {
    try {
        if (!error) {
// 此处用于测试粘包，并没有其他作用
#if 0
        PrintRecvData(data_, bytes_transferred);
        std::chrono::milliseconds dura(2000);
        std::this_thread::sleep_for(dura);
#endif
            // data_中已经移动的字符指针
            int copy_len = 0;
            while (bytes_transferred > 0) {
                // 1. 处理报文头
                if (!b_head_parse_) {
                    // 接收的数据不足头部长度
                    if (bytes_transferred + recv_head_node_->cur_len_ < HEAD_TOTAL_LEN) {
                        std::memcpy(recv_head_node_->data_ + recv_head_node_->cur_len_,
                                    data_ + copy_len, bytes_transferred);
                        recv_head_node_->cur_len_ += bytes_transferred;
                        std::memset(data_, 0, MAX_LENGTH);
#if defined(USE_IOSERVICE_POOL)
                        socket_.async_read_some(
                            boost::asio::buffer(data_, MAX_LENGTH),
                            std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
#endif // USE_IOSERVICE_POOL
#if defined(USE_IOTHREAD_POOL)
                        socket_.async_read_some(boost::asio::buffer(data_, MAX_LENGTH),
                                                boost::asio::bind_executor(
                                                    strand_, std::bind(&CSession::HandleRead, this,
                                                                       _1, _2, SharedSelf())));
#endif // USE_IOTHREAD_POOL
                        return;
                    }

                    // 1. 收到的数据比头部长,先处理报文头
                    int head_remain = HEAD_TOTAL_LEN - recv_head_node_->cur_len_;
                    std::memcpy(recv_head_node_->data_ + recv_head_node_->cur_len_,
                                data_ + copy_len, head_remain);

                    // 更新已经处理的data_长度和未处理的接受长度
                    copy_len += head_remain;
                    bytes_transferred -= head_remain;

                    // 获取头部msg_id数据并判断报文是否非法
                    short msg_id = 0;
                    std::memcpy(&msg_id, recv_head_node_->data_, HEAD_ID_LEN);
                    msg_id = boost::asio::detail::socket_ops::network_to_host_short(msg_id);
                    std::cout << "msg_id is: " << msg_id << std::endl;
                    if (msg_id > MAX_LENGTH) {
                        std::cout << "invalid msg_id is: " << msg_id << std::endl;
                        server_->ClearSession(uuid_);
                        return;
                    }

                    // 获取头部msg_len数据
                    short msg_len = 0;
                    // 这里有错误？
                    memcpy(&msg_len, recv_head_node_->data_ + HEAD_ID_LEN, HEAD_DATA_LEN);
                    msg_len = boost::asio::detail::socket_ops::network_to_host_short(msg_len);
                    std::cout << "msg_len is " << msg_len << std::endl;
                    if (msg_len > MAX_LENGTH) {
                        std::cout << "invalid msg_len is: " << msg_len << std::endl;
                        server_->ClearSession(uuid_);
                        return;
                    }

                    // 2. 收到的数据比头部长,再处理报文体
                    recv_msg_node_ = std::make_shared<RecvNode>(msg_len, msg_id);
                    // 剩余消息长度小于报文规定的长度
                    if (bytes_transferred < msg_len) {
                        std::memcpy(recv_msg_node_->data_ + recv_msg_node_->cur_len_,
                                    data_ + copy_len, bytes_transferred);
                        recv_msg_node_->cur_len_ += bytes_transferred;
                        std::memset(data_, 0, MAX_LENGTH);
#if defined(USE_IOSERVICE_POOL)
                        socket_.async_read_some(
                            boost::asio::buffer(data_, MAX_LENGTH),
                            std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
#endif // USE_IOSERVICE_POOL

#if defined(USE_IOTHREAD_POOL)
                        socket_.async_read_some(boost::asio::buffer(data_, MAX_LENGTH),
                                                boost::asio::bind_executor(
                                                    strand_, std::bind(&CSession::HandleRead, this,
                                                                       _1, _2, SharedSelf())));
#endif // USE_IOTHREAD_POOL
                        b_head_parse_ = true;
                        return;
                    }
                    // 剩余消息长度大于报文规定的长度-可能是多个逻辑包，切包处理
                    std::memcpy(recv_msg_node_->data_ + recv_msg_node_->cur_len_, data_ + copy_len,
                                msg_len);
                    recv_msg_node_->cur_len_ += msg_len;
                    copy_len += msg_len;
                    bytes_transferred -= msg_len;
                    recv_msg_node_->data_[recv_msg_node_->total_len_] = '\0';
                    std::cout << "recv data: " << recv_msg_node_->data_ << std::endl;
                    // 消息接收完毕，调用send测试
                    LogicSystem::GetInstance()->PostMsgToQue(std::make_shared<LogicNode>(
                        shared_from_this(), std::dynamic_pointer_cast<RecvNode>(recv_msg_node_)));

                    // 继续轮询下一段报文
                    b_head_parse_ = false;
                    recv_head_node_->Clear();
                    if (bytes_transferred <= 0) {
                        std::memset(data_, 0, MAX_LENGTH);
#if defined(USE_IOSERVICE_POOL)
                        socket_.async_read_some(
                            boost::asio::buffer(data_, MAX_LENGTH),
                            std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
#endif // USE_IOSERVICE_POOL
#if defined(USE_IOTHREAD_POOL)
                        socket_.async_read_some(boost::asio::buffer(data_, MAX_LENGTH),
                                                boost::asio::bind_executor(
                                                    strand_, std::bind(&CSession::HandleRead, this,
                                                                       _1, _2, SharedSelf())));
#endif // USE_IOTHREAD_POOL
                        return;
                    }
                    continue;
                }

                // 2. 处理报文体
                // 已处理报文头，并上次只接受部分数据，继续处理上次未接收完毕得消息，就是剩余的报文体数据
                int remain_msg_len = recv_msg_node_->total_len_ - recv_msg_node_->cur_len_;
                if (bytes_transferred < remain_msg_len) {
                    std::memcpy(recv_msg_node_->data_ + recv_msg_node_->cur_len_, data_ + copy_len,
                                bytes_transferred);
                    recv_msg_node_->cur_len_ += bytes_transferred;
                    std::memset(data_, 0, MAX_LENGTH);
                    socket_.async_read_some(
                        boost::asio::buffer(data_, MAX_LENGTH),
                        std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
                    return;
                }

                // 第二次接受的数据大于剩余未处理长度
                std::memcpy(recv_msg_node_->data_ + recv_msg_node_->cur_len_, data_ + copy_len,
                            remain_msg_len);
                recv_msg_node_->cur_len_ += remain_msg_len;
                bytes_transferred -= remain_msg_len;
                copy_len += remain_msg_len;
                recv_msg_node_->data_[recv_msg_node_->total_len_] = '\0';
                std::cout << "recv data: " << recv_msg_node_->data_ << std::endl;
                // 消息接收完毕，调用send测试
                // auto recv_node_ptr = std::dynamic_pointer_cast<RecvNode>(recv_msg_node_);
                LogicSystem::GetInstance()->PostMsgToQue(std::make_shared<LogicNode>(
                    shared_from_this(), std::dynamic_pointer_cast<RecvNode>(recv_msg_node_)));
                // Send(recv_msg_node_->data_, recv_msg_node_->total_len_,
                // recv_node_ptr->GetMsgId());

                // 继续轮询下一段报文
                b_head_parse_ = false;
                recv_head_node_->Clear();
                if (bytes_transferred <= 0) {
                    std::memset(data_, 0, MAX_LENGTH);
                    socket_.async_read_some(
                        boost::asio::buffer(data_, MAX_LENGTH),
                        std::bind(&CSession::HandleRead, this, _1, _2, SharedSelf()));
                    return;
                }
                continue;
            }
        } else {
            std::cout << "HandleRead Error! Error code = " << error.value()
                      << ". Message: " << error.message() << std::endl;
            Close();
            server_->ClearSession(uuid_);
        }
    } catch (const std::exception &e) {
        std::cout << "Exception code is " << e.what() << std::endl;
    }
}