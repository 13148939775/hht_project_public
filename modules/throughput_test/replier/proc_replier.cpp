/**
 * @file proc_replier.cpp
 * @author your name (you@domain.com)
 * @brief 仅用于模拟数据测试使用
 * @version 0.1
 * @date 2023-06-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "DDSservice.h"
#include "rti/config/Logger.hpp"
#include "data_test.hpp"

#include <chrono>
#include <ctime>
#include <thread>

using namespace DDSservice;

const int ARR_SIZE = 150;
// 数据包计数器
static long long count = 0;
static long long send_count = 0;

#if 1
// 初始化数据结构4B
Data4B big_data4b{4};

// 初始化数据结构20B
std::vector<char> big_data20b_(20, 2);
BigData20B big_data20b(std::move(big_data20b_));

// 初始化数据结构60B
std::vector<char> big_data60b_(60, 2);
BigData60B big_data60b(std::move(big_data60b_));

// 初始化数据结构1K
std::vector<char> big_data1k_(1024, 3);
BigData1K big_data1k(std::move(big_data1k_));

// 初始化数据结构2K
std::vector<char> big_data2k_(1024 * 2, 4);
BigData2K big_data2k(std::move(big_data2k_));

// 初始化数据结构4K
std::vector<char> big_data4k_(1024 * 4, 5);
BigData4K big_data4k(std::move(big_data4k_));

// 初始化数据结构16K
std::vector<char> big_data16k_(1024 * 16, 6);
BigData16K big_data16k(std::move(big_data16k_));

// 初始化数据结构32K
std::vector<char> big_data32k_(1024 * 32, 7);
BigData32K big_data32k(std::move(big_data32k_));

// 初始化数据结构256K
std::vector<char> big_data256k_(1024 * 256, 8);
BigData256K big_data256k(std::move(big_data256k_));

// 初始化数据结构1M
std::vector<char> big_data1m_(1024 * 1024 * 1, 9);
BigData1M big_data1m(std::move(big_data1m_));

// 初始化数据结构2M
std::vector<char> big_data2m_(1024 * 1024 * 2, 10);
BigData2M big_data2m(std::move(big_data2m_));

// 初始化数据结构8M
std::vector<char> big_data8m_(1024 * 1024 * 8, 11);
BigData8M big_data8m(std::move(big_data8m_));

// 初始化数据结构12M
std::vector<char> big_data12m_(1024 * 1024 * 12, 12);
BigData12M big_data12m(std::move(big_data12m_));

// 初始化数据结构20M
std::vector<char> big_data20m_(1024 * 1024 * 20, 13);
BigData20M big_data20m(big_data20m_);

// 初始化数据结构50M
std::vector<char> big_data50m_(1024 * 1024 * 50, 14);
BigData50M big_data50m(big_data50m_);
#endif

// 以下是测试2000对RR服务发现阶段
class DDSservice::ReplierListenerData4B : public rti::request::ReplierListener<Data4B, Data4B>
{
public:
    virtual void on_request_available(rti::request::Replier<Data4B, Data4B> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data())
                          << std::endl;

                // replier.send_reply(big_data20b, request.info());
                std::cout << "[DONE!]" << std::endl;
            }
        }
    }
};

int TestDiscovery()
{
    // RTI 日志
    static rti::config::Logger &dds_log = rti::config::Logger::instance();
    // dds_log.verbosity(rti::config::Verbosity::STATUS_LOCAL);
    dds_log.verbosity_by_category(rti::config::LogCategory::ALL_CATEGORIES, rti::config::Verbosity::STATUS_ALL);
    dds_log.print_format(rti::config::PrintFormat::VERBOSE_TIMESTAMPED);
    dds_log.output_file("test_discovery_replier_dds.log");

    std::vector<DDSreplier<Data4B, Data4B>> repliers;
    std::shared_ptr<ReplierListenerData4B> listener_ptr4B =
        std::make_shared<ReplierListenerData4B>();
    for (int i = 0; i < 2000; i++)
    {
        DDSreplier<Data4B, Data4B> replier;
        replier.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
        replier.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
        std::string request_topic_name = "requester";
        request_topic_name += std::to_string(i);
        std::string reply_topic_name = "replier";
        reply_topic_name += std::to_string(i);

        replier.SetRequestTopicName(request_topic_name);
        replier.SetReplyTopicName(reply_topic_name);

        replier.CreateReplier(listener_ptr4B);
        replier.SetMaxWaitTime(5000);
        repliers.push_back(std::move(replier));
    }
    std::vector<std::thread> threads;

    for (auto &replier : repliers)
    {
        std::thread one_thread = std::thread([&]()
                                             {
            while(1)
            {
                replier.ReceiveRequests();
            } });
        threads.push_back(std::move(one_thread));
    }

    for (auto &one_thread : threads)
    {
        one_thread.join();
    }

    return 0;
}

class DDSservice::ReplierListener20B : public rti::request::ReplierListener<BigData20B, BigData20B>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData20B, BigData20B> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
            // std::time_t timestamp = std::chrono::system_clock::to_time_t(now);
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            // std::cout << "当前时间戳: " << timestamp << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data20b, request.info());
                std::cout << "[20B DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener60B : public rti::request::ReplierListener<BigData60B, BigData60B>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData60B, BigData60B> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data60b, request.info());
                std::cout << "[60B DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener1K : public rti::request::ReplierListener<BigData1K, BigData1K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData1K, BigData1K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data1k, request.info());

                std::cout << "[1k DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener2K : public rti::request::ReplierListener<BigData2K, BigData2K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData2K, BigData2K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data2k, request.info());

                std::cout << "[2k DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener4K : public rti::request::ReplierListener<BigData4K, BigData4K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData4K, BigData4K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data4k, request.info());

                std::cout << "[4k DONE!]" << std::endl;
            }
        }
    }
};

class DDSservice::ReplierListener16K : public rti::request::ReplierListener<BigData16K, BigData16K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData16K, BigData16K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data16k, request.info());

                std::cout << "[16k DONE!]" << std::endl;
            }
        }
    }
};

class DDSservice::ReplierListener32K : public rti::request::ReplierListener<BigData32K, BigData32K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData32K, BigData32K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data32k, request.info());
                std::cout << "[32k DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener256K : public rti::request::ReplierListener<BigData256K, BigData256K>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData256K, BigData256K> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data256k, request.info());
                std::cout << "[256k DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener1M : public rti::request::ReplierListener<BigData1M, BigData1M>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData1M, BigData1M> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data1m, request.info());

                std::cout << "[1M DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener2M : public rti::request::ReplierListener<BigData2M, Data4B>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData2M, Data4B> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data4b, request.info());

                std::cout << "[2M DONE!]" << std::endl;
            }
        }
    }
};

class DDSservice::ReplierListener8M : public rti::request::ReplierListener<BigData8M, Data4B>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData8M, Data4B> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data4b, request.info());

                std::cout << "[8M DONE!]" << std::endl;
            }
        }
    }
};

class DDSservice::ReplierListener12M : public rti::request::ReplierListener<BigData12M, BigData12M>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData12M, BigData12M> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            // std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            std::cout << "应答方接收数据包" << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data12m, request.info());

                std::cout << "[12M DONE!]" << std::endl;
            }
        }
    }
};
class DDSservice::ReplierListener20M : public rti::request::ReplierListener<BigData20M, BigData20M>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData20M, BigData20M> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data20m, request.info());

                std::cout << "[DONE!]" << std::endl;
            }
        }
    }
};

class DDSservice::ReplierListener50M : public rti::request::ReplierListener<BigData50M, BigData50M>
{
public:
    virtual void on_request_available(rti::request::Replier<BigData50M, BigData50M> &replier)
    {
        // TODO处理函数
        auto requests = replier.take_requests();
        if (0 < requests.length())
        {
            std::cout << "应答方接收数据包序号->" << ++(::count) << std::endl;
            //   << " 数据包长度->" << requests.length() << std::endl;
            for (auto &request : requests)
            {
                if (!request.info().valid())
                    continue;
                std::cout << "request->"
                          << std::to_string(request.data().data().at(0))
                          << std::endl;

                replier.send_reply(big_data50m, request.info());

                std::cout << "[DONE!]" << std::endl;
            }
        }
    }
};

int run_replier()
{
    // RTI 日志
    static rti::config::Logger &dds_log = rti::config::Logger::instance();
    // dds_log.verbosity(rti::config::Verbosity::STATUS_LOCAL);
    dds_log.verbosity_by_category(rti::config::LogCategory::ALL_CATEGORIES, rti::config::Verbosity::STATUS_ALL);
    dds_log.print_format(rti::config::PrintFormat::VERBOSE_TIMESTAMPED);
    dds_log.output_file("replier_dds.log");
    /*--------------------------replier20B--------------------------*/
    DDSreplier<BigData20B, BigData20B> replier20B;
    replier20B.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier20B.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier20B.SetRequestTopicName("20B_requester");
    replier20B.SetReplyTopicName("20B_replier");
    std::shared_ptr<ReplierListener20B> listener_ptr20b =
        std::make_shared<ReplierListener20B>();
    replier20B.CreateReplier(listener_ptr20b);
    replier20B.SetMaxWaitTime(500);

    /*--------------------------replier60B--------------------------*/
    DDSreplier<BigData60B, BigData60B> replier60B;
    replier60B.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier60B.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier60B.SetRequestTopicName("60B_requester");
    replier60B.SetReplyTopicName("60B_replier");
    std::shared_ptr<ReplierListener60B> listener_ptr60b =
        std::make_shared<ReplierListener60B>();
    replier60B.CreateReplier(listener_ptr60b);
    replier60B.SetMaxWaitTime(500);

    /*--------------------------replier1K--------------------------*/
    DDSreplier<BigData1K, BigData1K> replier1K;
    replier1K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier1K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier1K.SetRequestTopicName("1K_requester");
    replier1K.SetReplyTopicName("1K_replier");
    std::shared_ptr<ReplierListener1K> listener_ptr1k =
        std::make_shared<ReplierListener1K>();
    replier1K.CreateReplier(listener_ptr1k);
    replier1K.SetMaxWaitTime(500);

    /*--------------------------replier2K--------------------------*/
    DDSreplier<BigData2K, BigData2K> replier2K;
    replier2K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier2K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier2K.SetRequestTopicName("2K_requester");
    replier2K.SetReplyTopicName("2K_replier");
    std::shared_ptr<ReplierListener2K> listener_ptr2k =
        std::make_shared<ReplierListener2K>();
    replier2K.CreateReplier(listener_ptr2k);
    replier2K.SetMaxWaitTime(500);

    /*--------------------------replier4K--------------------------*/
    DDSreplier<BigData4K, BigData4K> replier4K;
    replier4K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier4K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier4K.SetRequestTopicName("4K_requester");
    replier4K.SetReplyTopicName("4K_replier");
    std::shared_ptr<ReplierListener4K> listener_ptr4k =
        std::make_shared<ReplierListener4K>();
    replier4K.CreateReplier(listener_ptr4k);
    replier4K.SetMaxWaitTime(500);

    /*--------------------------replier16K--------------------------*/
    DDSreplier<BigData16K, BigData16K> replier16K;
    replier16K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier16K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier16K.SetRequestTopicName("16K_requester");
    replier16K.SetReplyTopicName("16K_replier");
    std::shared_ptr<ReplierListener16K> listener_ptr16k =
        std::make_shared<ReplierListener16K>();
    replier16K.CreateReplier(listener_ptr16k);
    replier16K.SetMaxWaitTime(500);

    /*--------------------------replier32K--------------------------*/
    DDSreplier<BigData32K, BigData32K> replier32K;
    replier32K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier32K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier32K.SetRequestTopicName("32K_requester");
    replier32K.SetReplyTopicName("32K_replier");
    std::shared_ptr<ReplierListener32K> listener_ptr32k =
        std::make_shared<ReplierListener32K>();
    replier32K.CreateReplier(listener_ptr32k);
    replier32K.SetMaxWaitTime(500);

    /*--------------------------replier256K--------------------------*/
    DDSreplier<BigData256K, BigData256K> replier256K;
    replier256K.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier256K.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier256K.SetRequestTopicName("256K_requester");
    replier256K.SetReplyTopicName("256K_replier");
    std::shared_ptr<ReplierListener256K> listener_ptr256k =
        std::make_shared<ReplierListener256K>();
    replier256K.CreateReplier(listener_ptr256k);
    replier256K.SetMaxWaitTime(5000);

    /*--------------------------replier1M--------------------------*/
    DDSreplier<BigData1M, BigData1M> replier1M;
    replier1M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier1M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier1M.SetRequestTopicName("1M_requester");
    replier1M.SetReplyTopicName("1M_replier");
    std::shared_ptr<ReplierListener1M> listener_ptr1m =
        std::make_shared<ReplierListener1M>();
    replier1M.CreateReplier(listener_ptr1m);
    replier1M.SetMaxWaitTime(5000);

    /*--------------------------replier2M--------------------------*/
    DDSreplier<BigData2M, Data4B> replier2M;
    replier2M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier2M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier2M.SetRequestTopicName("2M_requester");
    replier2M.SetReplyTopicName("2M_replier");
    std::shared_ptr<ReplierListener2M> listener_ptr2m =
        std::make_shared<ReplierListener2M>();
    replier2M.CreateReplier(listener_ptr2m);
    replier2M.SetMaxWaitTime(5000);

    // /*--------------------------replier8M--------------------------*/
    DDSreplier<BigData8M, Data4B> replier8M;
    replier8M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier8M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    replier8M.SetRequestTopicName("8M_requester");
    replier8M.SetReplyTopicName("8M_replier");
    std::shared_ptr<ReplierListener8M> listener_ptr8m =
        std::make_shared<ReplierListener8M>();
    replier8M.CreateReplier(listener_ptr8m);
    replier8M.SetMaxWaitTime(5000);

    // // /*--------------------------replier12M--------------------------*/
    // DDSreplier<BigData12M, BigData12M> replier12M;
    // replier12M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier12M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier12M.SetRequestTopicName("12M_requester");
    // replier12M.SetReplyTopicName("12M_replier");
    // std::shared_ptr<ReplierListener12M> listener_ptr12m =
    //     std::make_shared<ReplierListener12M>();
    // replier12M.CreateReplier(listener_ptr12m);
    // replier12M.SetMaxWaitTime(5000);

    // /*--------------------------replier20M--------------------------*/
    // DDSreplier<BigData20M, BigData20M> replier20M;
    // replier20M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier20M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier20M.SetRequestTopicName("20M_requester");
    // replier20M.SetReplyTopicName("20M_replier");
    // std::shared_ptr<ReplierListener20M> listener_ptr20m =
    //     std::make_shared<ReplierListener20M>();
    // replier20M.CreateReplier(listener_ptr20m);
    // replier20M.SetMaxWaitTime(5000);

    // /*--------------------------replier50M--------------------------*/
    // DDSreplier<BigData50M, BigData50M> replier50M;
    // replier50M.SetDataReaderQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier50M.SetDataWriterQoS("RequestReplyExampleProfiles::ReplierExampleProfile");
    // replier50M.SetRequestTopicName("50M_requester");
    // replier50M.SetReplyTopicName("50M_replier");
    // std::shared_ptr<ReplierListener50M> listener_ptr50m =
    //     std::make_shared<ReplierListener50M>();
    // replier50M.CreateReplier(listener_ptr50m);
    // replier50M.SetMaxWaitTime(5000);

    while (1)
    {
        // replier20B.ReceiveRequests();
        // replier60B.ReceiveRequests();
        // replier1K.ReceiveRequests();
        // replier2K.ReceiveRequests();
        // replier4K.ReceiveRequests();
        // replier16K.ReceiveRequests();
        // replier32K.ReceiveRequests();
        // replier256K.ReceiveRequests();
        // replier1M.ReceiveRequests();
        replier2M.ReceiveRequests();
        replier8M.ReceiveRequests();
        // replier12M.ReceiveRequests();
        // replier20M.ReceiveRequests();
        // replier50M.ReceiveRequests();
    }

    return 0;
}
