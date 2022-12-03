cmake_minimum_required(VERSION 3.5)

project(10_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(10_cpp main.cpp sort.h sort.cpp)

install(TARGETS 10_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
