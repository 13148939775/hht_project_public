/**
 * @file CServer.hpp
 * @brief 服务器接收连接的管理类
 * @author T001294
 * @version 1.0
 * @date 2024-06-04
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __CSERVER_HPP__
#define __CSERVER_HPP__

#include <map>

#include "version.h"
#include "CSession.hpp"

#if defined(USE_IOSERVICE_POOL)
#include "IOServicePool.hpp"
#endif // USE_IOSERVICE_POOL

#if defined(USE_IOTHREAD_POOL)
#include "IOThreadPool.hpp"
#endif // USE_IOTHREAD_POOL

class CServer {
public:
    CServer(const CServer &other) = delete;
    CServer &operator=(const CServer &other) = delete;
    CServer(CServer &&rhs) noexcept = delete;
    CServer &operator=(CServer &&rhs) noexcept = delete;

    virtual ~CServer();
    explicit CServer(std::string &address, std::uint16_t port);

    /**
     * @brief 启动异步操作
     */
    void Run();

    /**
     * @brief 清理session
     */
    void ClearSession(std::string);

    const char *GetVersion();

private:
    /**
     * @brief 监听系统信号并关闭
     */
    void DoAwaitStop();

    /**
     * @brief 接受连接
     */
    void DoAccept();

    /**
     * @brief 关闭Acceptor
     */
    void CloseAcceptor();

private:
#if defined(USE_IOTHREAD_POOL)
    static std::shared_ptr<AsioIOThreadPool> pool_;
#endif // USE_IOTHREAD_POOL

#if defined(USE_IOSERVICE_POOL)
    static std::shared_ptr<AsioIOServicePool> pool_;
#endif // USE_IOSERVICE_POOL

    boost::asio::io_context &io_context_;
    tcp::acceptor acceptor_;
    boost::asio::signal_set signals_;

    // 管理session表
    std::map<std::string, std::shared_ptr<CSession>> sessions_;
};

#endif // __CSERVER_HPP__