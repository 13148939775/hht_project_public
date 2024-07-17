/**
 * @file proc_requester.cpp
 * @author your name (you@domain.com)
 * @brief 仅用于模拟数据测试使用
 * @version 0.1
 * @date 2023-06-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "DDSservice.h"
#include "data_test.hpp"
#include "rti/config/Logger.hpp"
#include <chrono>
#include <ctime>

#include <vector>
#include <thread>
#include <mutex>
#include <atomic>

using namespace DDSservice;

const int THREAD_NUM = 14;
std::mutex mtx;
const int ARR_SIZE = 150;

std::atomic<long long> send_count(0);
std::atomic<long long> receive_count(0);
std::atomic_flag lock_send = ATOMIC_FLAG_INIT;
std::atomic_flag lock_receive = ATOMIC_FLAG_INIT;

// 数据包计数器
// static long long send_count = 0;
// static long long receive_count = 0;

int TestDiscovery()
{
    // RTI 日志
    static rti::config::Logger &dds_log = rti::config::Logger::instance();
    // dds_log.verbosity(rti::config::Verbosity::STATUS_LOCAL);
    dds_log.verbosity_by_category(rti::config::LogCategory::ALL_CATEGORIES, rti::config::Verbosity::STATUS_ALL);
    dds_log.print_format(rti::config::PrintFormat::VERBOSE_TIMESTAMPED);
    dds_log.output_file("test_discovery_requester_dds.log");

    // 初始化数据结构20B
    std::vector<Data4B> send_data;
    for (int i = 0; i < 2000; i++)
    {
        Data4B tmp_data(i);
        send_data.push_back(std::move(tmp_data));
    }

    // 创建2000个requester
    std::vector<DDSrequester<Data4B, Data4B>> requesters;
    for (int i = 0; i < 2000; i++)
    {
        DDSrequester<Data4B, Data4B> requester;
        requester.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
        requester.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
        std::string request_topic_name = "requester";
        request_topic_name += std::to_string(i);
        std::string reply_topic_name = "replier";
        reply_topic_name += std::to_string(i);

        requester.SetRequestTopicName(request_topic_name);
        requester.SetReplyTopicName(reply_topic_name);

        requester.CreateRequester();
        requester.SetMaxWaitTime(5000);
        requesters.push_back(std::move(requester));
    }
    // 发送请求
    for (int i = 0; i < 2000; i++)
    {
        requesters.at(i).SendRequests(send_data.at(i));
        std::cout << "[SEND OK]" << std::endl;
        rti::util::sleep(dds::core::Duration::from_millisecs(10));
    }
    return 0;
}

int run_requester()
{
    // RTI 日志
    static rti::config::Logger &dds_log = rti::config::Logger::instance();
    // dds_log.verbosity(rti::config::Verbosity::STATUS_LOCAL);
    dds_log.verbosity_by_category(rti::config::LogCategory::ALL_CATEGORIES, rti::config::Verbosity::STATUS_ALL);
    dds_log.print_format(rti::config::PrintFormat::VERBOSE_TIMESTAMPED);
    dds_log.output_file("requester_dds.log");

    /*--------------------------requester20B--------------------------*/
    DDSrequester<BigData20B, BigData20B> requester20B;
    requester20B.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester20B.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester20B.SetRequestTopicName("20B_requester");
    requester20B.SetReplyTopicName("20B_replier");
    requester20B.CreateRequester();
    requester20B.SetMaxWaitTime(500);

    /*--------------------------requester60B--------------------------*/
    DDSrequester<BigData60B, BigData60B> requester60B;
    requester60B.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester60B.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester60B.SetRequestTopicName("60B_requester");
    requester60B.SetReplyTopicName("60B_replier");
    requester60B.CreateRequester();
    requester60B.SetMaxWaitTime(500);

    /*--------------------------requester1K--------------------------*/
    DDSrequester<BigData1K, BigData1K> requester1K;
    requester1K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester1K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester1K.SetRequestTopicName("1K_requester");
    requester1K.SetReplyTopicName("1K_replier");
    requester1K.CreateRequester();
    requester1K.SetMaxWaitTime(500);

    /*--------------------------requester2K--------------------------*/
    DDSrequester<BigData2K, BigData2K> requester2K;
    requester2K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester2K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester2K.SetRequestTopicName("2K_requester");
    requester2K.SetReplyTopicName("2K_replier");
    requester2K.CreateRequester();
    requester2K.SetMaxWaitTime(500);

    /*--------------------------requester4K--------------------------*/
    DDSrequester<BigData4K, BigData4K> requester4K;
    requester4K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester4K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester4K.SetRequestTopicName("4K_requester");
    requester4K.SetReplyTopicName("4K_replier");
    requester4K.CreateRequester();
    requester4K.SetMaxWaitTime(500);

    /*--------------------------requester16K--------------------------*/
    DDSrequester<BigData16K, BigData16K> requester16K;
    requester16K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester16K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester16K.SetRequestTopicName("16K_requester");
    requester16K.SetReplyTopicName("16K_replier");
    requester16K.CreateRequester();
    requester16K.SetMaxWaitTime(500);

    /*--------------------------requester32K--------------------------*/
    DDSrequester<BigData32K, BigData32K> requester32K;
    requester32K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester32K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester32K.SetRequestTopicName("32K_requester");
    requester32K.SetReplyTopicName("32K_replier");
    requester32K.CreateRequester();
    requester32K.SetMaxWaitTime(500);

    /*--------------------------requester256K--------------------------*/
    DDSrequester<BigData256K, BigData256K> requester256K;
    requester256K.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester256K.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester256K.SetRequestTopicName("256K_requester");
    requester256K.SetReplyTopicName("256K_replier");
    requester256K.CreateRequester();
    requester256K.SetMaxWaitTime(5000);

    /*--------------------------requester1M--------------------------*/
    DDSrequester<BigData1M, BigData1M> requester1M;
    requester1M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester1M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester1M.SetRequestTopicName("1M_requester");
    requester1M.SetReplyTopicName("1M_replier");
    requester1M.CreateRequester();
    requester1M.SetMaxWaitTime(5000);

    /*--------------------------requester2M--------------------------*/
    DDSrequester<BigData2M, Data4B> requester2M;
    requester2M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester2M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester2M.SetRequestTopicName("2M_requester");
    requester2M.SetReplyTopicName("2M_replier");
    requester2M.CreateRequester();
    requester2M.SetMaxWaitTime(5000);

    /*--------------------------requester8M--------------------------*/
    DDSrequester<BigData8M, Data4B> requester8M;
    requester8M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester8M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    requester8M.SetRequestTopicName("8M_requester");
    requester8M.SetReplyTopicName("8M_replier");
    requester8M.CreateRequester();
    requester8M.SetMaxWaitTime(5000);

    // /*--------------------------requester12M--------------------------*/
    // DDSrequester<BigData12M, BigData12M> requester12M;
    // requester12M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester12M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester12M.SetRequestTopicName("12M_requester");
    // requester12M.SetReplyTopicName("12M_replier");
    // requester12M.CreateRequester();
    // requester12M.SetMaxWaitTime(5000);

    /*--------------------------requester20M--------------------------*/
    // DDSrequester<BigData20M, BigData20M> requester20M;
    // requester20M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester20M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester20M.SetRequestTopicName("20M_requester");
    // requester20M.SetReplyTopicName("20M_replier");
    // requester20M.CreateRequester();
    // requester20M.SetMaxWaitTime(5000);

    // /*--------------------------requester50M--------------------------*/
    // DDSrequester<BigData50M, BigData50M> requester50M;
    // requester50M.SetDataReaderQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester50M.SetDataWriterQoS("RequestReplyExampleProfiles::RequesterExampleProfile");
    // requester50M.SetRequestTopicName("50M_requester");
    // requester50M.SetReplyTopicName("50M_replier");
    // requester50M.CreateRequester();
    // requester50M.SetMaxWaitTime(5000);

    // 初始化数据结构20B
    Data4B big_data4b{4};

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
    BigData20M big_data20m(std::move(big_data20m_));

    // 初始化数据结构50M
    std::vector<char> big_data50m_(1024 * 1024 * 50, 14);
    BigData50M big_data50m(std::move(big_data50m_));

    std::cout << "[数据初始化完毕,准备发送和接收数据...]" << std::endl;
    // 创建发送线程
    std::vector<std::thread> requester_threads(THREAD_NUM);

    // 创建接收线程
    // std::vector<std::thread> requester_recv_threads(THREAD_NUM);

    // requester_threads[0] = std::thread([&]()
    //                                    {
    // while(1)
    // {
    //     // 发送
    //     requester20B.SendRequests(big_data20b);
    //     // while(lock_send.test_and_set(std::memory_order_acquire));
    //     // ++(::send_count);
    //     // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //     std::cout << "请求方发送数据包" <<std::endl;
    //     // lock_send.clear(std::memory_order_release);

    //     // 等待和接收
    //     auto replier_data20b = requester20B.ReceiveReplies();
    //     if (0 < replier_data20b.length())
    //     {
    //         // while (lock_receive.test_and_set(std::memory_order_acquire));
    //         // receive_count += static_cast<long long>(replier_data20b.length());
    //         // std::cout << "请求方接收应答方序号->" << receive_count << std::endl;
    //         std::cout << "请求方接收应答方" << std::endl;
    //         // lock_receive.clear(std::memory_order_release);
    //         std::cout << "[20B DONE!]" << std::endl;
    //     }
    //     // 间隔500ms发送
    //     rti::util::sleep(dds::core::Duration::from_millisecs(500));
    // } });

    // requester_threads[1] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         // 发送
    //         requester60B.SendRequests(big_data60b);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         std::cout << "请求方发送数据包" <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         // 等待和接收
    //         auto replier_data60b = requester60B.ReceiveReplies();
    //         if (0 < replier_data60b.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data60b.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[60B DONE!]"<<std::endl;

    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[2] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         requester1K.SendRequests(big_data1k);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         std::cout << "请求方发送数据包" <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         auto replier_data1k = requester1K.ReceiveReplies();
    //         if (0 < replier_data1k.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data1k.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[1K DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[3] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         requester2K.SendRequests(big_data2k);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         std::cout << "请求方发送数据包" <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         auto replier_data2k = requester2K.ReceiveReplies();
    //         if (0 < replier_data2k.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data2k.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[2K DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[4] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         requester4K.SendRequests(big_data4k);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         std::cout << "请求方发送数据包" <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         auto replier_data4k = requester4K.ReceiveReplies();
    //         if (0 < replier_data4k.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data4k.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[4K DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[5] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         requester16K.SendRequests(big_data16k);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         auto replier_data16k = requester16K.ReceiveReplies();
    //         if (0 < replier_data16k.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data16k.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[16K DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[6] = std::thread([&]()
    //                                    {
    //         while(1)
    //         {
    //             requester32K.SendRequests(big_data32k);
    //             // while(lock_send.test_and_set(std::memory_order_acquire));
    //             // ++(::send_count);
    //             // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //             std::cout << "请求方发送数据包" <<std::endl;
    //             // lock_send.clear(std::memory_order_release);

    //             auto replier_data32k = requester32K.ReceiveReplies();
    //             if (0 < replier_data32k.length())
    //             {
    //                 // while(lock_receive.test_and_set(std::memory_order_acquire));
    //                 // receive_count += static_cast<long long>(replier_data32k.length());
    //                 // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //                 std::cout << "请求方接收应答方" <<std::endl;
    //                 // lock_receive.clear(std::memory_order_release);
    //                 std::cout << "[32K DONE!]"<<std::endl;
    //             }
    //             rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //         } });

    // requester_threads[7] = std::thread([&]()
    //                                    {
    //             while(1)
    //             {
    //                 requester256K.SendRequests(big_data256k);
    //                 // while(lock_send.test_and_set(std::memory_order_acquire));
    //                 // ++(::send_count);
    //                 // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //                 std::cout << "请求方发送数据包" <<std::endl;
    //                 // lock_send.clear(std::memory_order_release);

    //                 auto replier_data256k = requester256K.ReceiveReplies();
    //                 if (0 < replier_data256k.length())
    //                 {
    //                     // while(lock_receive.test_and_set(std::memory_order_acquire));
    //                     // receive_count += static_cast<long long>(replier_data256k.length());
    //                     // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //                     std::cout << "请求方接收应答方" <<std::endl;
    //                     // lock_receive.clear(std::memory_order_release);
    //                     std::cout << "[256K DONE!]"<<std::endl;
    //                 }
    //                 rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //             } });

    // requester_threads[8] = std::thread([&]()
    //                                    {
    //     while(1)
    //     {
    //         requester1M.SendRequests(big_data1m);
    //         // while(lock_send.test_and_set(std::memory_order_acquire));
    //         // ++(::send_count);
    //         // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         std::cout << "请求方发送数据包" <<std::endl;
    //         // lock_send.clear(std::memory_order_release);

    //         auto replier_data1m = requester1M.ReceiveReplies();
    //         if (0 < replier_data1m.length())
    //         {
    //             // while(lock_receive.test_and_set(std::memory_order_acquire));
    //             // receive_count += static_cast<long long>(replier_data1m.length());
    //             // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             std::cout << "请求方接收应答方" <<std::endl;
    //             // lock_receive.clear(std::memory_order_release);
    //             std::cout << "[1M DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    requester_threads[0] = std::thread([&]()
                                       {
        while(1)
        {
            requester2M.SendRequests(big_data2m);
            // while(lock_send.test_and_set(std::memory_order_acquire));
            // ++(::send_count);
            // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
            std::cout << "请求方发送数据包" <<std::endl;
            // lock_send.clear(std::memory_order_release);

            auto replier_data2m = requester2M.ReceiveReplies();
            if (0 < replier_data2m.length())
            {
                // while(lock_receive.test_and_set(std::memory_order_acquire));
                // receive_count += static_cast<long long>(replier_data2m.length());
                // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
                std::cout << "请求方接收应答方" <<std::endl;
                // lock_receive.clear(std::memory_order_release);

                std::cout << "[2M DONE!]"<<std::endl;
            }
            rti::util::sleep(dds::core::Duration::from_millisecs(500));
        } });

    requester_threads[1] = std::thread([&]()
                                       {
        while(1)
        {
            requester8M.SendRequests(big_data8m);
            // while(lock_send.test_and_set(std::memory_order_acquire));
            // ++(::send_count);
            // std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
            std::cout << "请求方发送数据包" <<std::endl;
            // lock_send.clear(std::memory_order_release);

            auto replier_data8m = requester8M.ReceiveReplies();
            if (0 < replier_data8m.length())
            {
                // while(lock_receive.test_and_set(std::memory_order_acquire));
                // receive_count += static_cast<long long>(replier_data8m.length());
                // std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
                std::cout << "请求方接收应答方" <<std::endl;
                // lock_receive.clear(std::memory_order_release);

                std::cout << "[8M DONE!]"<<std::endl;
            }
            rti::util::sleep(dds::core::Duration::from_millisecs(500));
        } });

    // requester_threads[11] = std::thread([&]()
    //                                     {
    //     while(1)
    //     {
    //         requester12M.SendRequests(big_data12m);
    // while(lock_send.test_and_set(std::memory_order_acquire));
    //         ++(::send_count);
    //         std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         lock_send.clear(std::memory_order_release);
    //         auto replier_data12m = requester12M.ReceiveReplies();
    //         if (0 < replier_data12m.length())
    //         {
    //                         while(lock_receive.test_and_set(std::memory_order_acquire));

    //             receive_count += static_cast<long long>(replier_data12m.length());
    //             std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //                         lock_receive.clear(std::memory_order_release);

    //             std::cout << "[12M DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[10] = std::thread([&]()
    //                                     {
    //     while(1)
    //     {
    //         requester20M.SendRequests(big_data20m);
    //         while(lock_send.test_and_set(std::memory_order_acquire));
    //         ++(::send_count);
    //         std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         lock_send.clear(std::memory_order_release);

    //         auto replier_data20m = requester20M.ReceiveReplies();
    //         if (0 < replier_data20m.length())
    //         {
    //             while(lock_receive.test_and_set(std::memory_order_acquire));
    //             receive_count += static_cast<long long>(replier_data20m.length());
    //             std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //             lock_receive.clear(std::memory_order_release);
    //             std::cout << "[20M DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // requester_threads[11] = std::thread([&]()
    //                                     {
    //     while(1)
    //     {
    //         requester50M.SendRequests(big_data50m);
    // while(lock_send.test_and_set(std::memory_order_acquire));
    //         ++(::send_count);
    //         std::cout << "请求方发送数据包序号->" << send_count <<std::endl;
    //         lock_send.clear(std::memory_order_release);
    //         auto replier_data50m = requester50M.ReceiveReplies();
    //         if (0 < replier_data50m.length())
    //         {
    //                         while(lock_receive.test_and_set(std::memory_order_acquire));

    //             receive_count += static_cast<long long>(replier_data50m.length());
    //             std::cout << "请求方接收应答方序号->" << receive_count<<std::endl;
    //                         lock_receive.clear(std::memory_order_release);

    //             std::cout << "[50M DONE!]"<<std::endl;
    //         }
    //         rti::util::sleep(dds::core::Duration::from_millisecs(500));
    //     } });

    // 等待
    for (int i = 0; i < THREAD_NUM; i++)
    {
        requester_threads[i].join();
    }

    return 0;
}
