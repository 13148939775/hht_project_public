SET(CMAKE_SYSTEM_NAME Linux)
SET(CMAKE_SYSTEM_PROCESSOR arm)
 
set(TOOL_CHAIN ${MASTER_ROOT}/tools/aarch64--glibc--stable-2018.11-1)
# set compiler
set(CMAKE_C_COMPILER ${TOOL_CHAIN}/bin/aarch64-linux-gcc)
set(CMAKE_CXX_COMPILER ${TOOL_CHAIN}/bin/aarch64-linux-g++)
 
# set c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)