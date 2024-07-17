cmake_minimum_required(VERSION 3.5)
project(async_client)


add_executable(${PROJECT_NAME} cclient_demo.cpp async_client.cpp)
target_link_libraries(${PROJECT_NAME} ${BOOST_LIBS} -lpthread)

add_executable(cclient_test_packet_c cclient_packet_coalescing_test.cpp)
target_link_libraries(cclient_test_packet_c ${BOOST_LIBS} -lpthread)

add_executable(cclient_concurrency_test cclient_concurrency_test.cpp)
target_link_libraries(cclient_concurrency_test ${BOOST_LIBS} -lpthread)
