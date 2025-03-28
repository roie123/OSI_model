cmake_minimum_required(VERSION 3.10)

project(osi_model C)
set(CMAKE_C_STANDARD 99)
add_executable(networking_project main.c
        known_devices.h
        network_layer.c
        data_link.c
        SYSTEM_A/system_config_A.c
        SYSTEM_B/system_config_B.c

)