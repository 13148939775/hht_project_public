/**
 * @file IOThreadPool.hpp
 * @brief IOThreadPool多线程模型
 * @author T001294
 * @version 1.0
 * @date 2024-07-17
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __IO_THREAD_POOL_HPP__
#define __IO_THREAD_POOL_HPP__

#include <thread>

#include "common.h"
#include "Singleton.hpp"

class AsioIOThreadPool : public Singleton<AsioIOThreadPool> {
public:
    friend class Singleton<AsioIOThreadPool>;
    virtual ~AsioIOThreadPool() {
    }
    AsioIOThreadPool(const AsioIOThreadPool &other) = delete;
    AsioIOThreadPool &operator=(const AsioIOThreadPool &other) = delete;
    boost::asio::io_context &GetIOService();
    void Stop();

private:
    AsioIOThreadPool(size_t thread_num = std::thread::hardware_concurrency());
    boost::asio::io_context service_;
    std::unique_ptr<boost::asio::io_context::work> work_;
    std::vector<std::thread> threads_;
};

#endif // __IO_THREAD_POOL_HPP__