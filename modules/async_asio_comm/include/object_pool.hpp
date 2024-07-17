/**
 * @file object_pool.hpp
 * @brief 对象池
 * @author T001294
 * @version 1.0
 * @date 2024-05-27
 * 
 * @copyright Copyright (c) 2024  HRYT
 * 
 */

#ifndef __OBJECT_POOL_HPP__
#define __OBJECT_POOL_HPP__

#include <set>
#include <functional>
#include <mutex>
#include <stdlib.h>

template <class T>
class ObjectPool final {
public:
    explicit ObjectPool(const std::function<T()> &constructor, const uint64_t size = 32) :
        new_(constructor) {
        std::lock_guard<std::mutex> lock(mutex_);
        for (size_t i = 0; i < size; ++i) {
            idle_list_.emplace(new_);
        }
    }

    ~ObjectPool() {
        
    }

private:
    std::mutex mutex_;
    std::set<T> busy_list_;
    std::set<T> idle_list_;
    std::function<T()> new_;
};

#endif // __OBJECT_POOL_HPP__