cmake_minimum_required(VERSION 3.13)
project(garden_app)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden_app main.cpp Plants.cpp Plants.h Flowers.cpp Flowers.h Trees.cpp Trees.h Garden.cpp Garden.h)