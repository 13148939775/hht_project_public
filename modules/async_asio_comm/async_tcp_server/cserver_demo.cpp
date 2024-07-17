#include "CServer.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "输入: " << argv[0] << " <port>" << std::endl;
        return 1;
    }

    std::string ip{"127.0.0.1"};
    std::uint16_t port = std::atoi(argv[1]);

    CServer server{ip, port};
    // 保持异步操作
    server.Run();

    return 0;
}