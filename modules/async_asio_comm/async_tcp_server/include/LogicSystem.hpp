/**
 * @file LogicSystem.hpp
 * @brief 服务器逻辑处理类，针对网络层收到消息后逻辑处理，数据处理，回调处理等
 * @author T001294
 * @version 1.0
 * @date 2024-07-09
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __LOGICSYSTEM_HPP__
#define __LOGICSYSTEM_HPP__

#include <thread>
#include <map>
#include <queue>
#include <condition_variable>

#include "Singleton.hpp"
#include "macro.h"
#include "MsgNode.hpp"
#include "CSession.hpp"

class LogicNode {
    friend class LogicSystem;

public:
    LogicNode(std::shared_ptr<CSession> csession, std::shared_ptr<RecvNode> recvnode);

private:
    std::shared_ptr<CSession> session_;
    std::shared_ptr<RecvNode> recvnode_;
};

typedef std::function<void(std::shared_ptr<CSession>, short msg_id, std::string msg_data)>
    FuncCallBack;

class LogicSystem : public Singleton<LogicSystem> {
    friend class Singleton<LogicSystem>;

public:
    ~LogicSystem();
    void PostMsgToQue(std::shared_ptr<LogicNode> msg);

private:
    LogicSystem();
    void DealMsg();
    void RegisterCallBack();
    void HelloWorldCallBack(std::shared_ptr<CSession> session, short msg_id, std::string msg_data);
    // 从逻辑队列中取数据并执行回调函数
    std::thread worker_thread_;
    std::queue<std::shared_ptr<LogicNode>> msg_que_;
    std::mutex mutex_;
    std::condition_variable consume_;
    bool b_stop_;
    std::map<short, FuncCallBack> func_callback_;
};

#endif //__LOGICSYSTEM_HPP__