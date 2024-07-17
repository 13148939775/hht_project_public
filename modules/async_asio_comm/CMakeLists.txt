cmake_minimum_required(VERSION 3.5)
project(async_asio_comm)

if (USE_CC_AARCH64)
    set(LIBRARY_DIR "armv8")
else()
	set(LIBRARY_DIR "x86_64")
endif()

include_directories(
    ${MASTER_ROOT}/include/common/util
    ${PROJECT_SOURCE_DIR}/include
    ${3RD_PARTY_PATH}/boost_1_66_0/include
)

link_directories(
    ${3RD_PARTY_PATH}/boost_1_66_0/lib/${LIBRARY_DIR}
)

set(BOOST_LIBS
    boost_system
    boost_thread
    boost_chrono
)

add_subdirectory(async_client)
add_subdirectory(async_tcp_server)
