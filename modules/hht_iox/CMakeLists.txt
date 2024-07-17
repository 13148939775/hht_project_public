cmake_minimum_required(VERSION 3.15)

# add_compile_options(-Wall -std=c++17 -g -O2)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${MASTER_3RDPARTY_LIBS_DIR}/iceoryx-v2.0.3_/include
)

link_directories(${MASTER_3RDPARTY_LIBS_DIR}/iceoryx-v2.0.3_/lib/${TARGET_ARCH})
SET(HHT_IOX_LIBS
    hht_iox
)

# test 
add_executable(app_pub test/test_publisher.cpp)
add_executable(app_sub test/test_subscriber.cpp)
target_link_libraries(app_pub ${HHT_IOX_LIBS} -lpthread -lrt)
target_link_libraries(app_sub ${HHT_IOX_LIBS} -lpthread -lrt)

# test rr
# add_executable(client test/client_cxx_basic.cpp)
# target_link_libraries(client ${HHT_IOX_LIBS} -lpthread -lrt)
# add_executable(server1 test/server_cxx_basic.cpp)
# target_link_libraries(server1 ${HHT_IOX_LIBS} -lpthread -lrt)
# add_executable(server2 test/server_cxx_basic2.cpp)
# target_link_libraries(server2 ${HHT_IOX_LIBS} -lpthread -lrt)
