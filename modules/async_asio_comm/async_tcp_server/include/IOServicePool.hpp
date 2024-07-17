/**
 * @file IOServicePool.hpp
 * @brief 服务器多线程模型
 * @author T001294
 * @version 1.0
 * @date 2024-07-12
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __IO_SERVICE_POOL_HPP__
#define __IO_SERVICE_POOL_HPP__

#include <thread>
#include <vector>

#include "Singleton.hpp"
#include "common.h"

using IOService = boost::asio::io_context;
using IOWork = boost::asio::io_context::work;
using IOWorkPtr = std::unique_ptr<IOWork>;

class AsioIOServicePool : public Singleton<AsioIOServicePool> {
    friend class Singleton<AsioIOServicePool>;

public:
    virtual ~AsioIOServicePool();
    AsioIOServicePool(const AsioIOServicePool &other) = delete;
    AsioIOServicePool &operator=(const AsioIOServicePool &other) = delete;
    // 权重轮询调度算法(Weighted Round-Robin Scheduling)
    IOService &GetIOService();
    void Stop();

private:
    AsioIOServicePool(std::size_t size = std::thread::hardware_concurrency());
    std::vector<IOService> io_services_;
    std::vector<IOWorkPtr> works_;
    std::vector<std::thread> threads_;
    // 轮询索引
    std::size_t next_io_service_;
};

#endif //__IO_SERVICE_POOL_HPP__