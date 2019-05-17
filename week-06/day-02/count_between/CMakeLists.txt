cmake_minimum_required(VERSION 3.14)
project(count_between C)

set(CMAKE_C_STANDARD 11)

add_executable(count_between main.c count.c count.h)