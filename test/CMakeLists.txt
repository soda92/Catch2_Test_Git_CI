include(CTest)
include(Catch)

add_executable(test test.cpp)
target_link_libraries(test Catch2::Catch2)

catch_discover_tests(test)
