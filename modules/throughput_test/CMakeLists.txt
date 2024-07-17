cmake_minimum_required(VERSION 3.15)

message(STATUS "CMAKE_CURRENT_INCLUDE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}/include")

FILE (GLOB_RECURSE PROJECT_SOURCES_REPLIER
    ${CMAKE_CURRENT_SOURCE_DIR}/replier/*.cpp
    ${MASTER_ROOT}/message/test/*.cxx
    )

FILE (GLOB_RECURSE PROJECT_SOURCES_REQUESTER
    ${CMAKE_CURRENT_SOURCE_DIR}/requester/*.cpp
    ${MASTER_ROOT}/message/test/*.cxx
    )



add_executable(test test.cpp)
add_executable(test_replier ${PROJECT_SOURCES_REPLIER})
add_executable(test_requester ${PROJECT_SOURCES_REQUESTER})

target_link_libraries(test_replier ${RTI_DDS_LIBRARIES}  -ldl -lm -lpthread -lrt -no-pie -rdynamic)
target_link_libraries(test_requester ${RTI_DDS_LIBRARIES}  -ldl -lm -lpthread -lrt -no-pie -rdynamic)
        