#include "async_client.hpp"

AsyncTcpClient::AsyncTcpClient(const std::string &host, const std::string &port) :
    io_context_(), socket_(io_context_), resolver_(io_context_) {
    resolver_.async_resolve(tcp::v4(), host, port, std::bind(&self_type::OnResolve, this, std::placeholders::_1, std::placeholders::_2));
}

void AsyncTcpClient::Run() {
    io_context_.run();
}

void AsyncTcpClient::OnResolve(b_ec ec, tcp::resolver::results_type endpoints) {
    if (ec) {
        std::cerr << "Resolve: " << ec.message() << std::endl;
    } else {
        boost::asio::async_connect(socket_, endpoints, std::bind(&self_type::OnConnect, this, _1, _2));
    }
}

void AsyncTcpClient::OnConnect(b_ec ec, tcp::endpoint endpoint) {
    if (ec) {
        std::cout << "Connect failed: " << ec.message() << std::endl;
        socket_.close();
    } else {
        DoWrite();
    }
}

void AsyncTcpClient::DoWrite() {
    short request_len = 0;
    do {
        std::memset(cin_buf_, 0, MAX_LENGTH);
        std::memset(send_data_, 0, MAX_LENGTH);
        std::cout << "Enter message: ";
        std::cin.getline(cin_buf_, MAX_LENGTH);
        request_len = std::strlen(cin_buf_);
        // 转为网络字节系
        int msg_id = 1001;
        short msg_id_host = boost::asio::detail::socket_ops::host_to_network_short(msg_id);
        std::memcpy(send_data_, &msg_id_host, HEAD_ID_LEN);
        short request_len_network = boost::asio::detail::socket_ops::host_to_network_short(request_len);
        std::memcpy(send_data_ + HEAD_ID_LEN, &request_len_network, 2);
        std::memcpy(send_data_ + HEAD_TOTAL_LEN, cin_buf_, request_len);

    } while (request_len == 0);

    boost::asio::async_write(socket_, boost::asio::buffer(send_data_, request_len + HEAD_TOTAL_LEN), std::bind(&self_type::OnWrite, this, _1, _2));
}

void AsyncTcpClient::OnWrite(b_ec ec, std::size_t length) {
    boost::ignore_unused(length);
    if (!ec) {
        std::memset(reply_head, 0, MAX_LENGTH);
        socket_.async_receive(boost::asio::buffer(reply_head, HEAD_TOTAL_LEN), std::bind(&self_type::OnReadHead, this, _1, _2));
    }
}

void AsyncTcpClient::OnReadHead(b_ec ec, std::size_t length) {
    if (!ec) {
        short msg_id = 0;
        memcpy(&msg_id, reply_head, HEAD_ID_LEN);
        short msg_len = 0;
        std::memcpy(&msg_len, reply_head + HEAD_ID_LEN, HEAD_ID_LEN);
        // 转为本地字节序
        msg_len = boost::asio::detail::socket_ops::network_to_host_short(msg_len);
        msg_id = boost::asio::detail::socket_ops::network_to_host_short(msg_id);
        std::cout << "Reply len is: " << msg_len << std::endl;
        std::memset(recv_data, 0, MAX_LENGTH);
        socket_.async_receive(boost::asio::buffer(recv_data, msg_len), std::bind(&self_type::OnReadBody, this, _1, _2));
    }
}

void AsyncTcpClient::OnReadBody(b_ec ec, std::size_t length) {
    if (!ec) {
        std::cout << "Reply is: ";
        std::cout.write(recv_data, length) << std::endl;
    }

    getchar();

    // Close();

    DoWrite();
}

void AsyncTcpClient::Close() {
    std::cout << "Shutdown socket..." << std::endl;
    b_ec ec2;
    socket_.shutdown(tcp::socket::shutdown_both, ec2);

    if (ec2) {
        std::cerr << "Socket shutdown error: " << ec2.message() << std::endl;
        ec2.clear();
        // 不能return
    }
    std::cout << "Close socket..." << std::endl;

    socket_.close(ec2);

    if (ec2) {
        std::cerr << "Socket close error: " << ec2.message() << std::endl;
    }
}
