cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(complex)
set(CMAKE_CXX_STANDARD 17)

add_executable(tests complex.cpp test_complex.cpp)

