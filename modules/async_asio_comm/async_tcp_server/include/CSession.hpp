/**
 * @file CSession.hpp
 * @brief 处理客户端消息收发的会话类
 * @author T001294
 * @version 1.0
 * @date 2024-06-04
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __CSESSION_H__
#define __CSESSION_H__

#include <queue>
#include <mutex>
#include <string>
#include <cstring>
#include <iostream>
#include <sstream>

#include "common.h"
#include "MsgNode.hpp"

using boost::asio::ip::tcp;
class CServer;
class LogicSystem;

class CSession : public std::enable_shared_from_this<CSession> {
public:
    CSession(boost::asio::io_context &io_context, tcp::socket socket, CServer *server);
    ~CSession();
    std::string &GetUuid();
    void Start();
    void Send(char *msg, int max_length, short msg_id);
    void Close();
    std::shared_ptr<CSession> SharedSelf();

    // 此处用于测试粘包，并没有其他作用
    void PrintRecvData(char *data, int length) {
        std::stringstream ss;
        std::string result = "0x";
        for (size_t i = 0; i < length; i++) {
            std::string hexstr;
            ss << std::hex << std::setw(2) << std::setfill('0') << int(data[i]) << std::endl;
            ss >> hexstr;
            result += hexstr;
            // result += ss.str();
        }
        std::cout << "receive raw data is : " << result << std::endl;
    }

private:
    void HandleRead(const boost::system::error_code &error, size_t bytes_transferred,
                    std::shared_ptr<CSession> shared_self);
    void HandleWrite(const boost::system::error_code &error, std::shared_ptr<CSession> shared_self);

private:
    boost::asio::io_context &io_c_;
    tcp::socket socket_;
    bool started_;
    std::string uuid_;
    // 读消息临时存放
    char data_[MAX_LENGTH];
    CServer *server_;
    bool b_close_;

    // 控制发送队列
    std::mutex send_lock_;
    std::queue<std::shared_ptr<MsgNode>> send_que_;

    // 收到的消息结构
    std::shared_ptr<MsgNode> recv_msg_node_;
    // 是否处理完头部信息
    bool b_head_parse_;
    // 收到的头部结构
    std::shared_ptr<MsgNode> recv_head_node_;
    /*IOThreadPool模型使用*/
    // 使用IOThreadPool模型需要使用strand队列
#if defined(USE_IOTHREAD_POOL)
    boost::asio::strand<boost::asio::io_context::executor_type> strand_;
#endif // USE_IOTHREAD_POOL
};

#endif // __CSESSION_H__