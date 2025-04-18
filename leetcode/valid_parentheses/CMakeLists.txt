cmake_minimum_required(VERSION 3.10)

add_library(valid_parentheses_lib
	src/valid_parentheses.cpp
)

target_include_directories(valid_parentheses_lib PUBLIC include)

add_executable(valid_parentheses_app
	src/main.cpp
)

target_link_libraries(valid_parentheses_app
	valid_parentheses_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(valid_parentheses_test
    tests/valid_parentheses_test.cpp
)

target_link_libraries(valid_parentheses_test
    valid_parentheses_lib
    GTest::gtest_main
)

gtest_discover_tests(valid_parentheses_test)
