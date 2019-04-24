cmake_minimum_required(VERSION 3.13)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zoo main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Reptile.cpp Reptile.h Birds.cpp Birds.h)