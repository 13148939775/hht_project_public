
#include "DDS_comm.h"
#include "DDSServiceInterfaceIV3.hpp"

#include <iostream>
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <thread>

void TestPublish1() {
    HHT::DDSComm::DDSPublisherEntity<BodyDomain::BdArm_Get_struct> publisher("test_ps1");
    BodyDomain::BdArm_Get_struct data;
    sleep(5);
    for (int i = 0; i < 255; ++i) {
        data.constant(static_cast<u_int8_t>(1));
        publisher.Set(data);
        std::cout << "publish data " << 1 << std::endl;
        publisher.publish();
        rti::util::sleep(dds::core::Duration::from_millisecs(500));
    }
}

void TestPublish2() {
    HHT::DDSComm::DDSPublisherEntity<BodyDomain::BdArm_St_Get_struct> publisher("test_ps2");
    BodyDomain::BdArm_St_Get_struct data;
    sleep(5);
    for (int i = 0; i < 255; ++i) {
        data.constant(static_cast<u_int8_t>(2));
        publisher.Set(data);
        std::cout << "publish data " << 2 << std::endl;
        publisher.publish();
        rti::util::sleep(dds::core::Duration::from_millisecs(500));
    }
}

void TestWaitsetPublish() {
    rti::core::cond::AsyncWaitSet async_waitset;
    async_waitset.start();
    HHT::DDSComm::DDSPublisherEntity<BodyDomain::BdArm_Get_struct> publisher("test_ps", async_waitset);
    BodyDomain::BdArm_Get_struct data;
    sleep(5);
    for (int i = 0; i < 255; ++i) {
        data.constant(static_cast<u_int8_t>(i));
        publisher.Set(data);
        std::cout << "publish data " << i << std::endl;
        publisher.SendEvent();
        rti::util::sleep(dds::core::Duration::from_millisecs(100));
    }
}

int main(int argc, char **argv) {
    std::cout << "publish" << std::endl;
    std::thread th1(TestPublish1);
    th1.detach();
    std::thread th2(TestPublish2);
    th2.detach();
    while (1) {
        sleep(10);
    }
    // TestWaitsetPublish();
    std::cout << "done" << std::endl;
    return 0;
}