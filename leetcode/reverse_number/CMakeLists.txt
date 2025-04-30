cmake_minimum_required(VERSION 3.10)

add_library(reverse_number_lib
	src/reverse_number.cpp
)

target_include_directories(reverse_number_lib PUBLIC include)

add_executable(reverse_number_app
	src/main.cpp
)

target_link_libraries(reverse_number_app
	reverse_number_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(reverse_number_test
    tests/reverse_number_test.cpp
)

target_link_libraries(reverse_number_test
    reverse_number_lib
    GTest::gtest_main
)

gtest_discover_tests(reverse_number_test)
