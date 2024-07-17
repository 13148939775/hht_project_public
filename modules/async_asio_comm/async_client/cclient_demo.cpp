#include "async_client.hpp"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << "输入: " << argv[0] << " <host> <port>" << std::endl;
        return 1;
    }

    std::string host = argv[1];
    std::string port = argv[2];

    AsyncTcpClient client{host, port};
    // 保持异步操作
    client.Run();

    return 0;
}