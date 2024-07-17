project(run)

set(TBB_PATH tbb)

include_directories(
    ${3RD_PARTY_PATH}\\include
)
link_directories(
    ${3RD_PARTY_PATH}\\lib\\intel64\\vc14
)

set(LIBS
    tbb_debug
)

add_executable(${PROJECT_NAME} 1.cpp)
target_link_libraries(${PROJECT_NAME} ${LIBS})
# find_package(TBB REQUIRED)
# target_link_libraries(${PROJECT_NAME} PRIVATE TBB::tbb)