/**
 * @file macro.h
 * @brief
 * @author T001294
 * @version 1.0
 * @date 2024-05-15
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#ifndef __MACRO_H__
#define __MACRO_H__

#include <functional>
#include <memory>
#include <string.h>

// 控制发送队列最大阈值
#define MAX_RECVQUE 10000
#define MAX_SENDQUE 1000

#define MAX_LENGTH 1024 * 2
//头部总长度
#define HEAD_TOTAL_LEN 4
//头部id长度
#define HEAD_ID_LEN 2
//头部数据长度
#define HEAD_DATA_LEN 2

using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;

#define MEM_FN(x) std::bind(&self_type::x, shared_from_this())
#define MEM_FN1(x, y) std::bind(&self_type::x, shared_from_this(), y)
#define MEM_FN2(x, y, z) std::bind(&self_type::x, shared_from_this(), y, z)

enum MSG_IDS {
    MSG_HELLO_WORLD = 1001
};

#endif // __MACRO_H__