#include "iceoryx_posh/popo/subscriber.hpp"
#include "iceoryx_posh/popo/wait_set.hpp"
#include "iceoryx_posh/runtime/posh_runtime.hpp"
#include "iceoryx_hoofs/cxx/optional.hpp"
#include "topic_data.hpp"

#include <iostream>
#include <string>

void Wait() {
    // 初始化部分
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_sub");
    iox::cxx::optional<iox::popo::WaitSet<>> waitset;
    iox::popo::Subscriber<DoIp> subscriber({"doip", "", ""});
    waitset.emplace();
    waitset->attachState(subscriber, iox::popo::SubscriberState::HAS_DATA).or_else([](auto) {
        std::cerr << "failed to attach subscriber" << std::endl;
    });
    // 接收部分
    while (1) {
        // We block and wait for samples to arrive.
        auto notificationVector = waitset->wait();
        for (auto &notification : notificationVector) {
            if (notification->doesOriginateFrom(&subscriber)) {
                // Consume a sample
                subscriber.take()
                    .and_then([](auto &sample) { std::cout << " got value: " << std::to_string(sample->evtID) << "," << std::to_string(sample->value) << std::endl; })
                    .or_else([](auto &reason) {
                        std::cout << "got no data, return code: " << static_cast<uint64_t>(reason) << std::endl;
                    });
            }
        }
    }
}

int main() {
    Wait();
    return 0;
}
