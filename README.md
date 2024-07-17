/**
 * @file        READ_ME.md
 * @author      Jeremy_Xu
 * @brief   
 * @version     0.1
 * @date        2023-05-25
 * @modified    2023-05-29
 * @copyright Copyright (c) 2023
 *
 */
 
----------------------
## Compiling this Project
1. for x86_64:
    sudo chmod +x build_x86_64.sh
    ./build_x86_64.sh

2. for aarch64:
    sudo chmod +x build_aarch64.sh
    ./build_aarch64.sh
----------------------
## Run this Project
1. for x86_64:
    cd bin/nodes
    ./replier
    open another terminal then ./requester

2. for aarch64:
    copy USER_QOS_PROFILES.xml to the work directory
    export LD_LIBRARY_PATH=3rdparty/rti_dds_6.1.1/lib/armv8Linux4gcc7.3.0
    cd bin_aarch64/nodes
    ./replier
    open another terminal then ./requester
----------------------

# hht_project
