/**
 * @file Singleton.hpp
 * @brief 
 * @author T001294
 * @version 1.0
 * @date 2024-07-03
 * 
 * @copyright Copyright (c) 2024  HRYT
 * 
 */

#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

#include <memory>
#include <iostream>
#include <mutex>

template <typename T>
class Singleton {
protected:
    Singleton() = default;
    Singleton(const Singleton<T> &) = delete;
    Singleton &operator=(const Singleton<T> &st) = delete;
    static std::shared_ptr<T> _instance;

public:
    static std::shared_ptr<T> GetInstance() {
        static std::once_flag s_flag;
        std::call_once(s_flag, [&]() {
            _instance = std::shared_ptr<T>(new T);
        });
        return _instance;
    }
    void PrintAddress() {
        std::cout << _instance.get() << std::endl;
    }
    ~Singleton() {
        std::cout << "this is singleton destruct" << std::endl;
    }
};
template <typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;

#endif //__SINGLETON_HPP__
