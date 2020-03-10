cmake_minimum_required(VERSION 3.14)
project(2_2 C)

set(CMAKE_C_STANDARD 99)

include_directories(./header)
#add_executable(2_2 main.c)
add_executable(2_2 main.c header/list.h list.c)