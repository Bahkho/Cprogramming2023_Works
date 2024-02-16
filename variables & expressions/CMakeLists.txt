cmake_minimum_required(VERSION 3.26)
project(variables___expressions C)

set(CMAKE_C_STANDARD 99)

add_executable(variables___expressions main.c
        scoping.c
        expr.c)
