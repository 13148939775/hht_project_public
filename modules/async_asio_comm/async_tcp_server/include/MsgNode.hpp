/**
 * @file MsgNode.hpp
 * @brief
 * @author T001294
 * @version 1.0
 * @date 2024-06-29
 *
 * @copyright Copyright (c) 2024  HRYT
 *
 */

#include "common.h"
#include "macro.h"

#ifndef __MSG_NODE_HPP__
#define __MSG_NODE_HPP__

class MsgNode {
public:
    explicit MsgNode(short max_len) : total_len_(max_len), cur_len_(0) {
        data_ = new char[total_len_ + 1];
        data_[total_len_] = '\0';
    }
    virtual ~MsgNode() {
        if (data_ != NULL) { delete[] data_; }
    }

    void Clear() {
        ::memset(data_, 0, total_len_);
        cur_len_ = 0;
    }

    short cur_len_;
    short total_len_;
    char *data_;
};

class RecvNode : public MsgNode {
public:
    explicit RecvNode(short max_len, short msg_id) : MsgNode(max_len), msg_id_(msg_id) {
    }

    virtual ~RecvNode() {
    }

    short GetMsgId() const {
        return msg_id_;
    }

private:
    short msg_id_;
};

class SendNode : public MsgNode {
public:
    explicit SendNode(const char *msg, short max_len, short msg_id) :
        MsgNode(max_len + HEAD_TOTAL_LEN), msg_id_(msg_id) {
        short msg_id_host = boost::asio::detail::socket_ops::host_to_network_short(msg_id);
        memcpy(data_, &msg_id_host, HEAD_ID_LEN);
        short max_len_host = boost::asio::detail::socket_ops::host_to_network_short(max_len);
        memcpy(data_ + HEAD_ID_LEN, &max_len_host, HEAD_DATA_LEN);
        memcpy(data_ + HEAD_TOTAL_LEN, msg, max_len);
    }

    virtual ~SendNode() {
    }

    short GetMsgId() const {
        return msg_id_;
    }

private:
    short msg_id_;
};

#endif // __MSG_NODE_HPP__