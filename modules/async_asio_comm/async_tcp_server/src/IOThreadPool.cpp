#include "IOThreadPool.hpp"

AsioIOThreadPool::AsioIOThreadPool(size_t thread_num) :
    work_(new boost::asio::io_context::work(service_)) {
    for (size_t i = 0; i < thread_num; ++i) {
        threads_.emplace_back([this]() { service_.run(); });
    }
}

boost::asio::io_context &AsioIOThreadPool::GetIOService() {
    return service_;
}

void AsioIOThreadPool::Stop() {
    work_.reset();
    for (auto &t : threads_) { t.join(); }
}