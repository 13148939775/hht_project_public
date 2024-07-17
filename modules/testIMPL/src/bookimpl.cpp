#include "bookinterface.h"

class impl {
public:
    impl() {
    }
    impl(std::string name, double price);
    ~impl();
    void display();
    void set_price(double);
    double get_price();

private:
    std::string book_name;
    double book_price;
};

impl::impl(std::string name, double price) :
    book_name(name), book_price(price) {
}

impl::~impl() {
}

void impl::display() {
    std::cout << "book name:" << book_name << std::endl;
    std::cout << "book price:" << book_price << std::endl;
}

void impl::set_price(double price) {
    book_price = price;
}

double
impl::get_price() {
    return book_price;
}

book::book() :
    pImpl(std::make_unique<impl>()) {
}

book::book(std::string name, double price) :
    pImpl{std::make_unique<impl>(name, price)} {
}

book::~book() = default;

book &book::operator=(book &&) = default;

void book::display() {
    pImpl->display();
}