#include <array>
#include <functional>
#include <iostream>
#include <memory>
#include <string>

#include "boost/asio.hpp"
#include "boost/core/ignore_unused.hpp"
#include "macro.h"

using boost::asio::ip::tcp;

typedef boost::system::error_code b_ec;

class AsyncTcpClient {
public:
    virtual ~AsyncTcpClient() {
    }
    AsyncTcpClient(const AsyncTcpClient &other) = delete;
    AsyncTcpClient &operator=(const AsyncTcpClient &other) = delete;
    AsyncTcpClient(AsyncTcpClient &&rhs) noexcept = delete;
    AsyncTcpClient &operator=(AsyncTcpClient &&rhs) noexcept = delete;

    explicit AsyncTcpClient(const std::string &host, const std::string &port);

    void Run();

private:
    typedef AsyncTcpClient self_type;

    /**
     * @brief  解析端点回调
     * @param  ec               My Param doc
     * @param  endpoints        My Param doc
     */
    void OnResolve(b_ec ec, tcp::resolver::results_type endpoints);

    /**
     * @brief 连接-回调
     * @param  ec               My Param doc
     * @param  endpoint         My Param doc
     */
    void OnConnect(b_ec ec, tcp::endpoint endpoint);

    /**
     * @brief 写数据
     */
    void DoWrite();

    /**
     * @brief 写-回调
     * @param  ec               My Param doc
     * @param  length           My Param doc
     */
    void OnWrite(b_ec ec, std::size_t length);

    /**
     * @brief 读-回调
     * @param  ec               My Param doc
     * @param  length           My Param doc
     */
    void OnReadBody(b_ec ec, std::size_t length);

    void OnReadHead(b_ec ec, std::size_t length);

    /**
     * @brief 断开socket
     */
    void Close();

private:
    boost::asio::io_context io_context_;
    tcp::socket socket_;
    // 解析端点
    tcp::resolver resolver_;

    // 发送数据
    char cin_buf_[MAX_LENGTH];
    char send_data_[MAX_LENGTH];

    // 收到数据
    char reply_head[MAX_LENGTH];
    char recv_data[MAX_LENGTH];
};
