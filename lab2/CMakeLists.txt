cmake_minimum_required(VERSION 3.21)
project(lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2 main.cpp modules/array-manipulation.h modules/array-manipulation.cpp UI/menu.h UI/menu.cpp tests/tests.h tests/tests.cpp modules/basic-functions.cpp modules/basic-functions.h structs/struct.h definitions/definitions.h)
