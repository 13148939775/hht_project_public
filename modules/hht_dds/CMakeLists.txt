add_definitions(-DRTI_UNIX -DRTI_LINUX -DRTI_64BIT)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -fPIC -O2")
# message(STATUS "PATH ${MASTER_3RDPARTY_LIBS_DIR}")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_subdirectory(app)
