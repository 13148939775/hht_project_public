/**
 * @file topic_data.hpp
 * @brief 此文件不允许修改
 * @author T001294
 * @version 1.0
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023  HRYT
 * 
 */

#ifndef TOPIC_DATA_HPP_
#define TOPIC_DATA_HPP_

#include <cstdint>

struct DoIp {
    int evtID;
    int value;
};

#endif // TOPIC_DATA_HPP_

// 三个函数接口： int WaitEvt(const int evtID, const int timeout);
// int SendEvt(const int evtID, const int value);
// int GetState(const int evtID);
