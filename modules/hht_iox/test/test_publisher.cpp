#include "iox_interface.h"
#include "topic_data.hpp"

using namespace HHT;

constexpr char APP_NAME[] = "iox-cpp-publisher-with-options22";
constexpr char TOPIC_NAME[] = "Radar2";


int main(int argc, char *argv[]) {
    try {
        HHTPublisher<RadarObject> publisher(APP_NAME, TOPIC_NAME);

        RadarObject send_data(0, 0, 0);
        int count = 0;
        while (1) {
            send_data.x = 1.0F + count;
            send_data.y = 2.0F + count;
            send_data.z = 3.0F + count;
            publisher.Publish(send_data);

            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            ++count;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
