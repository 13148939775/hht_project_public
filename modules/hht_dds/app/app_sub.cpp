#include <iostream>
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <csignal>

#include "DDS_comm.h"
#include "DDSServiceInterfaceIV3.hpp"

using LoanedDataBd = dds::sub::LoanedSamples<BodyDomain::BdArm_Get_struct>;
using SampleHandler = std::function<void(LoanedDataBd &)>;

bool is_shutdown = false;
void stop_handler(int) noexcept {
    is_shutdown = true;
}

void setup_signal_handlers() noexcept {
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

void onDataAvailable1(LoanedDataBd &samples) {
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            std::cout << "Received sample:\n\t" << sample.data() << std::endl;
        }
    }
}

void onDataAvailable2(dds::sub::LoanedSamples<BodyDomain::BdArm_St_Get_struct> &samples) {
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            std::cout << "Received sample:\n\t" << sample.data() << std::endl;
        }
    }
}

int main(int argc, char **argv) {
    setup_signal_handlers();
    std::cout << "subscribe" << std::endl;
    rti::core::cond::AsyncWaitSet async_waitset(rti::core::cond::AsyncWaitSetProperty().thread_pool_size(1));
    async_waitset.start();
    SampleHandler Func = onDataAvailable1;
    HHT::DDSComm::DDSSubscriberEntity<BodyDomain::BdArm_Get_struct> subscriber1("test_ps1", async_waitset, Func);

    HHT::DDSComm::DDSSubscriberEntity<BodyDomain::BdArm_St_Get_struct> subscriber2("test_ps2", async_waitset, onDataAvailable2);

    while (!is_shutdown) {
        sleep(10);
        std::cout << "wait available data on waitset..." << std::endl;
    }
    std::cout << "app will be closed soon..." << std::endl;
    return 0;
}