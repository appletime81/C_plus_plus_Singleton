cmake_minimum_required(VERSION 3.21)
project(TestC)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestC write_string_to_file.cpp record_event.h record_others.cpp record_others.h record_event.cpp)
