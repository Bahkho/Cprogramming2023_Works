cmake_minimum_required(VERSION 3.26)
project(practice C)

set(CMAKE_C_STANDARD 99)

add_executable(practice main.c
        add.c
        add.h)
