cmake_minimum_required(VERSION 3.5)

project(9_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(9_cpp main.cpp)

install(TARGETS 9_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
