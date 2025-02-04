/**
 * @file cclient_concurrency_test.cpp
 * @brief 仅用于测试并发服务器性能，100个线程，每个线程发500个包，包间隔10ms
 * @author T001294
 * @version 1.0
 * @date 2024-07-16
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#include <iostream>
#include <boost/asio.hpp>
#include <thread>
#include <chrono>

using namespace std;
using namespace boost::asio::ip;
const int MAX_LENGTH = 1024 * 2;
const int HEAD_LENGTH = 2;
const int HEAD_TOTAL = 4;

std::vector<thread> vec_threads;
int main() {
    auto start = std::chrono::high_resolution_clock::now(); // 获取开始时间
    for (int i = 0; i < 100; i++) {
        vec_threads.emplace_back([]() {
            try {
                //创建上下文服务
                boost::asio::io_context ioc;
                //构造endpoint，此处写死使用8001端口
                tcp::endpoint remote_ep(address::from_string("127.0.0.1"), 8001);
                tcp::socket sock(ioc);
                boost::system::error_code error = boost::asio::error::host_not_found;
                sock.connect(remote_ep, error);
                if (error) {
                    cout << "connect failed, code is " << error.value() << " error msg is "
                         << error.message();
                    return 0;
                }
                int i = 0;
                while (i < 500) {
                    std::string request = "hello gtja";
                    size_t request_length = request.length();
                    char send_data[MAX_LENGTH] = {0};
                    int msgid = 1001;
                    int msgid_host = boost::asio::detail::socket_ops::host_to_network_short(msgid);
                    memcpy(send_data, &msgid_host, 2);
                    //转为网络字节序
                    int request_host_length =
                        boost::asio::detail::socket_ops::host_to_network_short(request_length);
                    memcpy(send_data + HEAD_LENGTH, &request_host_length, 2);
                    memcpy(send_data + HEAD_TOTAL, request.c_str(), request_length);
                    boost::asio::write(sock,
                                       boost::asio::buffer(send_data, request_length + HEAD_TOTAL));
                    cout << "begin to receive..." << endl;

                    char reply_head[HEAD_TOTAL];
                    size_t reply_length =
                        boost::asio::read(sock, boost::asio::buffer(reply_head, HEAD_TOTAL));

                    msgid = 0;
                    memcpy(&msgid, reply_head, HEAD_LENGTH);
                    short msglen = 0;
                    memcpy(&msglen, reply_head + HEAD_LENGTH, HEAD_LENGTH);
                    //转为本地字节序
                    msglen = boost::asio::detail::socket_ops::network_to_host_short(msglen);
                    msgid = boost::asio::detail::socket_ops::network_to_host_short(msgid);
                    char msg[MAX_LENGTH] = {0};
                    size_t msg_length = boost::asio::read(sock, boost::asio::buffer(msg, msglen));
                    std::cout << "msg id is " << msgid << " msg is ";
                    std::cout.write(msg, msglen) << endl;
                    i++;
                }
            } catch (std::exception &e) { std::cerr << "Exception: " << e.what() << endl; }
        });
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    for (auto &t : vec_threads) { t.join(); }
    // 执行一些需要计时的操作
    auto end = std::chrono::high_resolution_clock::now(); // 获取结束时间

    // 计算时间差，单位为毫秒
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    // 输出所用时间
    std::cout << "Time spent: " << duration.count() << " milliseconds." << std::endl;
    getchar();
    return 0;
}
