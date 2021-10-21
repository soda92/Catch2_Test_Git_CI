include(Catch)

add_executable(tests test.cpp)
target_link_libraries(tests Catch2::Catch2)

catch_discover_tests(tests)
