cmake_minimum_required(VERSION 3.16)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${MASTER_3RDPARTY_LIBS_DIR}/iceoryx-v2.0.3/include
)
link_directories(${MASTER_3RDPARTY_LIBS_DIR}/iceoryx-v2.0.3/lib/${TARGET_ARCH})
SET(ICEORYX_LIBS
    attr
    acl
    iceoryx_hoofs
    iceoryx_posh
    iceoryx_platform
)
SET(HHT_IOX_CKIT_LIBS
    ${CMAKE_CURRENT_SOURCE_DIR}/hht_iox_ckit/libhht_iox.so
    ${CMAKE_CURRENT_SOURCE_DIR}/hht_iox_ckit/libhht_iox_ckit.so
)

# add_library(hht_iox_ckit SHARED iceoryx_wrapper.cpp)
# target_link_libraries(hht_iox_ckit /home/jl/xjl_work/hht_project/3rdparty/iceoryx-v2.0.3_bk/lib/x64/libhht_iox.so -lpthread -lrt)

# test 
# add_executable(test_hht_iox_pub test_hht_iox_pub.cpp)
# add_executable(test_hht_iox_wait test_hht_iox_wait.cpp)
# target_link_libraries(test_hht_iox_pub ${ICEORYX_LIBS} -lpthread -lrt)
# target_link_libraries(test_hht_iox_wait ${ICEORYX_LIBS} -lpthread -lrt)

add_executable(test_a test_a.c)
target_link_libraries(test_a ${HHT_IOX_CKIT_LIBS} -lpthread -lrt  )

add_executable(test_b test_b.cpp)
target_link_libraries(test_b ${ICEORYX_LIBS} -lpthread -lrt )

