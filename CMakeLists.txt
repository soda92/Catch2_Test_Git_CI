cmake_minimum_required(VERSION 3.20)

project(catch2_test)

find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

add_subdirectory(src)

include(CTest)
add_subdirectory(test)
