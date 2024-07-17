cmake_minimum_required(VERSION 3.5)
project(async_server)

include_directories(${PROJECT_SOURCE_DIR}/include)

FILE(GLOB_RECURSE SERVER_SRC_FILES  
    ${PROJECT_SOURCE_DIR}/*.cpp)

add_executable(${PROJECT_NAME} ${SERVER_SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${BOOST_LIBS} -lpthread)
