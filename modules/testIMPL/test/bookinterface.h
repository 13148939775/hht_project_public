#pragma once
#include <iostream>
#include <memory>

class impl;

class book {
public:
    book();
    book(std::string, double);
    ~book();
    /*私有成员为指针，禁止使用C++默认浅拷贝*/
    book(const book &) = delete;
    book &operator=(const book &) = delete;
    //移动拷贝构造
    book(book &&);
    book &operator=(book &&);

    void display();

private:
    std::unique_ptr<impl> pImpl;
};