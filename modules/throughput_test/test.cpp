#include <iostream>
#include <unistd.h>
#include <cstring>
#include <memory>

int main()
{
    const size_t num_byte = 1024 * 1024 * 1300;

    // 申请一块大内存
    std::shared_ptr<char[]> ptr(new char[num_byte]);

    // char *ptr = static_cast<char *>(malloc(num_byte * sizeof(char)));

    if (ptr == nullptr)
    {
        std::cerr << "Failed to allocate memory" << std::endl;
        return 1;
    }
    std::cout << "申请内存1300MB" << std::endl;
    memset(ptr.get(), '1', num_byte);

    // 无限循环，保持程序执行
    while (true)
    {
        sleep(10);
    }

    return 0;
}