#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h>

#include "iceoryx_posh/popo/publisher.hpp"
#include "iceoryx_posh/runtime/posh_runtime.hpp"
#include "iceoryx_posh/popo/subscriber.hpp"
#include "iceoryx_posh/popo/wait_set.hpp"
#include "iceoryx_hoofs/cxx/optional.hpp"
#include "topic_data.hpp"

bool is_shutdown = false;
void stop_handler(int signal) {
    is_shutdown = true;
}

void setup_signal_handlers() {
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

void *send_thread(void *arg) {
    // init
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_pub_b");
    iox::popo::Publisher<DoIp> myPublisher({"doip_b", "", ""});
    // send
    for (uint32_t counter = 0U; counter < 255; ++counter) {
        myPublisher.publishCopyOf(DoIp{2, 2})
            .and_then([&] { std::cout << "Sending: " << 2 << std::endl; })
            .or_else([&](auto) { std::cout << "Failed sending: " << counter << std::endl; });
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    return NULL;
}

void *receive_thread(void *arg) {
    int timeout = 2000;
    // init
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_sub_b");
    iox::cxx::optional<iox::popo::WaitSet<>> waitset;
    iox::popo::Subscriber<DoIp> subscriber({"doip_a", "", ""});
    waitset.emplace();
    waitset->attachState(subscriber, iox::popo::SubscriberState::HAS_DATA).or_else([](auto) {
        std::cerr << "failed to attach subscriber" << std::endl;
    });
    // recv
    while (!is_shutdown) {
        auto notificationVector = waitset->timedWait(iox::units::Duration::fromMilliseconds(timeout));
        if (notificationVector.empty()) {
            std::cerr << "waiting data timeout!" << std::endl;
            continue;
        } else {
            for (auto &notification : notificationVector) {
                if (notification->doesOriginateFrom(&subscriber)) {
                    subscriber.take()
                        .and_then([](auto &sample) { std::cout << " got value: " << sample->evtID << "," << sample->value << std::endl; })
                        .or_else([](auto &reason) {
                            std::cout << "got no data, return code: " << static_cast<uint64_t>(reason) << std::endl;
                        });
                }
            }
        }
    }
    return NULL;
}

int main() {
    setup_signal_handlers();
    pthread_t send_tid, recv_tid;

    if (pthread_create(&send_tid, NULL, send_thread, NULL) != 0) {
        fprintf(stderr, "Error creating send thread\n");
        exit(EXIT_FAILURE);
    }

    if (pthread_create(&recv_tid, NULL, receive_thread, NULL) != 0) {
        fprintf(stderr, "Error creating receive thread\n");
        exit(EXIT_FAILURE);
    }

    while (!is_shutdown) {
        sleep(10);
    }

    exit(0);
}