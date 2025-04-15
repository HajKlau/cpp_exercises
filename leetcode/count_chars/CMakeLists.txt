cmake_minimum_required(VERSION 3.10)

enable_testing()

add_library(count_chars_lib
	src/count_chars.cpp
)

target_include_directories(count_chars_lib PUBLIC include)

add_executable(count_chars_app
	src/main.cpp
)

target_link_libraries(count_chars_app
    count_chars_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)+

add_executable(count_chars_test
    tests/count_chars_test.cpp
)

target_link_libraries(count_chars_test
    count_chars_lib
    GTest::gtest_main
)

gtest_discover_tests(count_chars_test)
	
