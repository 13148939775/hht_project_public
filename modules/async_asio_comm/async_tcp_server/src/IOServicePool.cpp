#include "IOServicePool.hpp"

AsioIOServicePool::AsioIOServicePool(size_t size) : io_services_(size), works_(size) {
    for (size_t i = 0; i < size; ++i) { works_[i] = IOWorkPtr(new IOWork(io_services_[i])); }
    //遍历多个ioservice，创建多个线程，每个线程内部启动ioservice
    for (size_t i = 0; i < io_services_.size(); ++i) {
        threads_.emplace_back([this, i]() { io_services_[i].run(); });
    }
}

AsioIOServicePool::~AsioIOServicePool() {
    std::cout << "AsioIOServicePool destruct" << std::endl;
}

IOService &AsioIOServicePool::GetIOService() {
    auto &service = io_services_[next_io_service_++];
    if (next_io_service_ == io_services_.size()) { next_io_service_ = 0; }
    return service;
}

void AsioIOServicePool::Stop() {
    //因为仅仅执行work.reset并不能让iocontext从run的状态中退出
    //当iocontext已经绑定了读或写的监听事件后，还需要手动stop该服务。
    for (auto &work : works_) {
        work->get_io_service().stop();
        work.reset();
    }
    for (auto &t : threads_) { t.join(); }
}