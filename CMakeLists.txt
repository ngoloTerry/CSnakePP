cmake_minimum_required(VERSION 3.28.3)

project(CSNAKEPP)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(CSNAKEPP main.cpp)
target_link_libraries(CSNAKEPP ${SDL2_LIBRARIES})