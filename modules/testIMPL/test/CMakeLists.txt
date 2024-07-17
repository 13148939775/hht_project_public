project(testa)

add_executable(${PROJECT_NAME} main.cpp)
add_dependencies(${PROJECT_NAME}  hhta)
target_link_libraries(${PROJECT_NAME} ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/libhhta.so)