#include "LogicSystem.hpp"

LogicNode::LogicNode(std::shared_ptr<CSession> csession, std::shared_ptr<RecvNode> recvnode) :
    session_(csession), recvnode_(recvnode) {
}

LogicSystem::LogicSystem() : b_stop_(false) {
    RegisterCallBack();
    worker_thread_ = std::thread(&LogicSystem::DealMsg, this);
}

void LogicSystem::RegisterCallBack() {
    func_callback_[MSG_HELLO_WORLD] = std::bind(&LogicSystem::HelloWorldCallBack, this, _1, _2, _3);
}

// 逻辑处理回调，主要处理数据
void LogicSystem::HelloWorldCallBack(std::shared_ptr<CSession> session, short msg_id,
                                     std::string msg_data) {
    // todo
    // 仅用于发送测试
    msg_data += "recv data";
    session->Send(const_cast<char *>(msg_data.c_str()), msg_data.size(), msg_id);
}

void LogicSystem::DealMsg() {
    for (;;) {
        std::unique_lock<std::mutex> unique_lk(mutex_);
        //判断队列为空则用条件变量阻塞等待，并释放锁
        while (msg_que_.empty() && !b_stop_) { consume_.wait(unique_lk); }
        //判断是否为关闭状态，则将队列中未处理的消息全部处理完然后退出循环
        if (b_stop_) {
            while (!msg_que_.empty()) {
                auto msg_node = msg_que_.front();
                std::cout << "recv_msg is:" << msg_node->recvnode_->GetMsgId() << std::endl;
                auto call_back_iter = func_callback_.find(msg_node->recvnode_->GetMsgId());
                if (call_back_iter == func_callback_.end()) {
                    msg_que_.pop();
                    continue;
                }
                call_back_iter->second(
                    msg_node->session_, msg_node->recvnode_->GetMsgId(),
                    std::string(msg_node->recvnode_->data_, msg_node->recvnode_->cur_len_));
                msg_que_.pop();
            }
            break;
        }
        //如果没有停服，且说明队列中有数据
        // 是consumer发送的激活信号激活了线程，则继续取队列中的数据处理
        auto msg_node = msg_que_.front();
        std::cout << "recv_msg is:" << msg_node->recvnode_->GetMsgId() << std::endl;
        auto call_back_iter = func_callback_.find(msg_node->recvnode_->GetMsgId());
        if (call_back_iter == func_callback_.end()) {
            msg_que_.pop();
            continue;
        }
        call_back_iter->second(
            msg_node->session_, msg_node->recvnode_->GetMsgId(),
            std::string(msg_node->recvnode_->data_, msg_node->recvnode_->cur_len_));
        msg_que_.pop();
    }
}

LogicSystem::~LogicSystem() {
    b_stop_ = true;
    consume_.notify_one();
    if (worker_thread_.joinable()) { worker_thread_.join(); }
}

void LogicSystem::PostMsgToQue(std::shared_ptr<LogicNode> msg) {
    std::unique_lock<std::mutex> unique_lk(mutex_);
    msg_que_.push(msg);
    if (msg_que_.size() == 1) { consume_.notify_one(); }
}
