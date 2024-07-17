
#include <iostream>
#include <memory>
#include <string>
#include <unistd.h>
#include <csignal>

#include "DDS_comm.h"
#include "DDSServiceInterfaceIV3.hpp"

using namespace HHT;
using namespace DDSComm;
using namespace BodyDomain;

using LoanedDataBd = dds::sub::LoanedSamples<BdArm_Srv_Req_Union>;
using SampleHandler = std::function<void(LoanedDataBd &)>;

bool is_shutdown = false;
void stop_handler(int) noexcept {
    is_shutdown = true;
}

void setup_signal_handlers() noexcept {
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

// listener use case
class ReplierListener : public rti::request::ReplierListener<BdArm_Srv_Req_Union, BdArm_Srv_Resp_Union> {
public:
    virtual void on_request_available(
        rti::request::Replier<BdArm_Srv_Req_Union, BdArm_Srv_Resp_Union>
            &replier) {
        // TODO处理函数
        BdArm_Srv_Resp_Union reply;
        auto requests = replier.take_requests();
        if (0 < requests.length()) {
            for (auto &request : requests) {
                if (!request.info().valid()) continue;
                if (request.data()._d() == 0) {
                    reply.BdArm_Set_SOA().VehicleUnlock_Rsp(0);
                }
                if (request.data()._d() == 1) {
                    reply.BdArm_Set_SOA().VehicleUnlock_Rsp(1);
                }
                // debug info
                std::cout << request.data() << std::endl;

                replier.send_reply(reply, request.info());
                // std::cout << "[Request From HDBI_DrLth_Set_struct to
                // HDBM_DrLth_Rsp_struct DONE!]";
            }
        }
    }
};

void TestReply() {
    std::shared_ptr<ReplierListener> listener(std::make_shared<ReplierListener>());
    DDSReplierEntity<BdArm_Srv_Req_Union, BdArm_Srv_Resp_Union> replier("test_request", "test_reply", listener, 1000);

    while (!is_shutdown) {
        // wait available data on listener
        sleep(10);
        std::cout << "wait available data on listener..." << std::endl;
    }
}

void onDataAvailable(LoanedDataBd &samples) {
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            std::cout << "Received sample:\n\t" << sample.data() << std::endl;
        }
    }
}

// waitset use case
void TestWaitsetReply() {
    rti::core::cond::AsyncWaitSet async_waitset(rti::core::cond::AsyncWaitSetProperty().thread_pool_size(10));
    async_waitset.start();
    SampleHandler Func = onDataAvailable;
    DDSReplierEntity<BdArm_Srv_Req_Union, BdArm_Srv_Resp_Union> replier("test_request", "test_reply", async_waitset, Func, 1000);
    BdArm_Srv_Resp_Union send_data;

    while (!is_shutdown) {
        sleep(10);
        std::cout << "wait available data on waitset..." << std::endl;
    }
}

int main(int argc, char **argv) {
    setup_signal_handlers();
    std::cout << "running" << std::endl;
    TestReply();
    // TestWaitsetReply();

    std::cout << "app will be closed soon..." << std::endl;
    return 0;
}