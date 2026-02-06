cmake_minimum_required(VERSION 3.20)
project(c_code_practice C)

set(CMAKE_C_STANDARD 99)

add_executable(c_code_practice main.c functions/functions.c functions/functions.h 04-02-26/stdio.c 04-02-26/stdio.h)
