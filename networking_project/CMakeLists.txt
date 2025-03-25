cmake_minimum_required(VERSION 3.10)

project(osi_model C)
set(CMAKE_C_STANDARD 99)
add_executable(network/main.c  , application.c)