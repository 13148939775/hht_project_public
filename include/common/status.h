/**
 * @file status.h
 * @author Jeremy_Xu
 * @brief   返回状态
 * @version 0.1
 * @date 2023-06-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef COMMON_STATUS_H
#define COMMON_STATUS_H

#include <string>

namespace common {
class Status {
public:
    Status() :
        m_code_(true), m_msg_("no value input") {
    }
    virtual ~Status() = default;

    Status(const std::string &msg) :
        m_code_(false), m_msg_(msg) {
    }
    bool ok() const {
        return m_code_;
    }

    bool operator==(const Status &rhs) const {
        return (this->m_code_ == rhs.m_code_) && (this->m_msg_ == rhs.m_msg_);
    }
    bool operator!=(const Status &rhs) const {
        return !(*this == rhs);
    }
    const std::string &error_message() const {
        return this->m_msg_;
    }
    std::string ToString() const {
        if (ok()) {
            return "OK";
        }
        return this->m_msg_;
    }

private:
    bool m_code_;
    std::string m_msg_;
};

#define RETURN_STATUS_OK() \
    return common::Status();

#define RETURN_STATUS(ST)                     \
    if (!ST.ok()) {                           \
        return common::Status(ST.ToString()); \
    }

} // namespace common

#endif