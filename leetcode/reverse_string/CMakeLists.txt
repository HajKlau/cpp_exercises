cmake_minimum_required(VERSION 3.10)

add_library(reverse_string_lib
	src/reverse_string.cpp
)

target_include_directories(reverse_string_lib PUBLIC include)

add_executable(reverse_string_app
	src/main.cpp
)

target_link_libraries(reverse_string_app
	reverse_string_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(reverse_string_test
    tests/reverse_string_test.cpp
)

target_link_libraries(reverse_string_test
    reverse_string_lib
    GTest::gtest_main
)

gtest_discover_tests(reverse_string_test)
