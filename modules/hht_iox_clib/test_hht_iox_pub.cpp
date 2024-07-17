#include <chrono>
#include <iostream>

#include "iceoryx_posh/popo/publisher.hpp"
#include "iceoryx_posh/runtime/posh_runtime.hpp"
#include "topic_data.hpp"

void Send() {
    // 初始化部分
    iox::runtime::PoshRuntime::initRuntime("hht_iox_clib_pub");
    iox::popo::Publisher<DoIp> myPublisher({"doip", "", ""});
    // 发送部分
    for (uint32_t counter = 0U; counter < 255; ++counter) {
        myPublisher.publishCopyOf(DoIp{counter, counter})
            .and_then([&] { std::cout << "Sending: " << counter << std::endl; })
            .or_else([&](auto) { std::cout << "Failed sending: " << counter << std::endl; });
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main() {
    std::thread tx(Send);
    tx.join();
    return 0;
}
