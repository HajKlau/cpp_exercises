cmake_minimum_required(VERSION 3.10)

add_library(two_sum_lib
	src/two_sum.cpp
)

target_include_directories(two_sum_lib PUBLIC include)

add_executable(two_sum_app
	src/main.cpp
)

target_link_libraries(two_sum_app
	two_sum_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(two_sum_test
    tests/two_sum_test.cpp
)

target_link_libraries(two_sum_test
    two_sum_lib
    GTest::gtest_main
)

gtest_discover_tests(two_sum_test)
