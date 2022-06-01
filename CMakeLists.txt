cmake_minimum_required(VERSION 3.0)
project(echo CXX)

add_library(menu SHARED ./src/menu.cpp)

add_executable(LRsystem ./src/main.cpp)

target_link_libraries(LRsystem menu)

