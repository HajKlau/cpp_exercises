cmake_minimum_required(VERSION 3.10)

add_library(sum_vector_lib
	src/sum_vector.cpp
)

target_include_directories(sum_vector_lib PUBLIC include)

add_executable(sum_vector_app
	src/main.cpp
)

target_link_libraries(sum_vector_app
	sum_vector_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(sum_vector_test
    tests/sum_vector_test.cpp
)

target_link_libraries(sum_vector_test
    sum_vector_lib
    GTest::gtest_main
)

gtest_discover_tests(sum_vector_test)
