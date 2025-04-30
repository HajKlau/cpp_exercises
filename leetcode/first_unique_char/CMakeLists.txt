cmake_minimum_required(VERSION 3.10)

add_library(first_unique_char_lib
	src/first_unique_char.cpp
)

target_include_directories(first_unique_char_lib PUBLIC include)

add_executable(first_unique_char_app
	src/main.cpp
)

target_link_libraries(first_unique_char_app
	first_unique_char_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(first_unique_char_test
    tests/first_unique_char_test.cpp
)

target_link_libraries(first_unique_char_test
    first_unique_char_lib
    GTest::gtest_main
)

gtest_discover_tests(first_unique_char_test)
