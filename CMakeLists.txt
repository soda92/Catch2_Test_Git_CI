cmake_minimum_required(VERSION 3.20)

project(catch2_test)

find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

add_executable(tests main.cpp)
target_link_libraries(tests Catch2::Catch2)

add_executable(run src.cpp)
target_link_libraries(run PRIVATE fmt::fmt)

include(CTest)
include(Catch)
catch_discover_tests(tests)
