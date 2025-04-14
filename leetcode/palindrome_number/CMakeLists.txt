cmake_minimum_required(VERSION 3.10)

add_library(palindrome_number_lib
	src/palindrome_number.cpp
)

target_include_directories(palindrome_number_lib PUBLIC include)

add_executable(palindrome_number_app
	src/main.cpp
)

target_link_libraries(palindrome_number_app
	palindrome_number_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(palindrome_number_test
    tests/palindrome_number_test.cpp
)

target_link_libraries(palindrome_number_test
    palindrome_number_lib
    GTest::gtest_main
)

gtest_discover_tests(palindrome_number_test)
