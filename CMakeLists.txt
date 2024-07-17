cmake_minimum_required(VERSION 3.5)
set(MASTER_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

option(USE_CC_AARCH64 "Build for arm architecture" OFF)
if(USE_CC_AARCH64)
    set(CMAKE_TOOLCHAIN_FILE ${MASTER_ROOT}/gnu-cmake-toolchain.cmake)
    message(STATUS "Build for arm architecture")
endif()

project(hht)

set(CMAKE_BUILD_TYPE Debug)
# include(CheckCXXCompilerFlag)
# if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# elseif(COMPILER_SUPPORTS_CXX0X)
#     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
# else()
#     message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++ support")
# endif()

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fpic -O0 -Werror")
elseif(CMAKE_BUILD_TYPE MATCHES "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpic -O2 -Werror")
else()
    message(STATUS "NO MATCHES BUILD TYPE")
endif()


set(3RD_PARTY_PATH ${MASTER_ROOT}/3rd_party)

# add_subdirectory(platform)
add_subdirectory(modules)
# add_subdirectory(service)