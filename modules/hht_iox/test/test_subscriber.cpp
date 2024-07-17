#include "iox_interface.h"
#include "topic_data.hpp"
#include <string.h>

using namespace HHT;

constexpr char APP_NAME[] = "iox-cpp-subscriber-with-options22";
constexpr char TOPIC_NAME[] = "Radar2";

int main(int argc, char *argv[]) {
    HHTSubscriber<RadarObject> subscriber(APP_NAME, TOPIC_NAME);

    RadarObject recv_data(0, 0, 0);
    while (1) {
        // subscriber.Subscribe(recv_data);

        // waitset
        subscriber.Subscribe(recv_data, true);
        std::cout << "recv x->" << recv_data.x << " y->" << recv_data.y << " z->"
                  << recv_data.z << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    return 0;
}
