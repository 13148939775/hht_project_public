project(hhta)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fPIC -O2")
message(STATUS "PROJECT: ${PROJECT_NAME}")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} SHARED src/bookimpl.cpp)

add_subdirectory(test)