cmake_minimum_required(VERSION 3.20)
project(c_code_practice C)

set(CMAKE_C_STANDARD 99)

add_executable(c_code_practice main.c functions/functions.c functions/functions.h 04-02-26/stdio.c 04-02-26/stdio.h 06-02-26/operators.c 06-02-26/operators.h 09-02-26/data-types.c 09-02-26/data-types.h 15-02-26/c-practice.c 15-02-26/c-practice.h 25-02-26/time-library/time-lib.c 25-02-26/time-library/time-lib.h)
