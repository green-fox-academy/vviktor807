cmake_minimum_required(VERSION 3.14)
project(count_lines C)

set(CMAKE_C_STANDARD 11)

add_executable(count_lines main.c count.c count.h)