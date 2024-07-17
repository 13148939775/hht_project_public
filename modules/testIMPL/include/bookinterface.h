#pragma once
#include <iostream>
#include <memory>

class impl;

class book {
public:
    book();
    book(std::string, double);
    ~book();
    book(const book &) = delete;
    book &operator=(const book &) = delete;

    book(book &&);
    book &operator=(book &&);

    void display();

private:
    std::unique_ptr<impl> pImpl;
};