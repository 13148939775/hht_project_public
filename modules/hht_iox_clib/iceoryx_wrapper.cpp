#include "iceoryx_posh/popo/subscriber.hpp"
#include "iceoryx_posh/popo/publisher.hpp"
#include "iceoryx_posh/popo/wait_set.hpp"
#include "iceoryx_posh/runtime/posh_runtime.hpp"
#include "iceoryx_hoofs/cxx/optional.hpp"
#include "topic_data.hpp"

#include "topic_data.hpp"
#include "iceoryx_wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif

int SendEvt(const int evtID, const int value) {
    // init
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_pub_a");
    iox::popo::Publisher<DoIp> publisher({"doip_a", "", ""});

    // send
    publisher.publishCopyOf(DoIp{evtID, value})
        .and_then([&] { std::cout << "Sending: " << evtID << std::endl; })
        .or_else([&](auto) { std::cout << "Failed sending: " << evtID << std::endl; });

    return 0;
}

int WaitEvt(const int evtID, const int timeout) {
    // init
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_sub_a");
    iox::popo::Subscriber<DoIp> subscriber({"doip_b", "", ""});
    iox::cxx::optional<iox::popo::WaitSet<>> waitset;
    waitset.emplace();
    waitset->attachState(subscriber, iox::popo::SubscriberState::HAS_DATA).or_else([](auto) {
        std::cerr << "failed to attach subscriber" << std::endl;
    });

    if (!waitset.has_value()) {
        std::cerr << "data not avaliable!" << std::endl;
        return -1;
    }
    // recv
    auto notificationVector = waitset->timedWait(iox::units::Duration::fromMilliseconds(timeout));
    if (notificationVector.empty()) {
        std::cerr << "waiting data timeout!" << std::endl;
        return -1;
    } else {
        for (auto &notification : notificationVector) {
            if (notification->doesOriginateFrom(&subscriber)) {
                auto sample = subscriber.take().value();
                std::cout << " got value: " << sample->evtID << "," << sample->value << std::endl;
            }
        }
        return 0;
    }
}

#ifdef __cplusplus
}
#endif
