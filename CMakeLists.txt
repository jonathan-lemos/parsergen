cmake_minimum_required(VERSION 3.14)
project(parsergen)

set(CMAKE_CXX_STANDARD 17)

add_executable(parsergen main.cpp Grammar.cpp Grammar.h)