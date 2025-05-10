cmake_minimum_required(VERSION 3.10)

add_library(sort_descending_vector_lib
	src/sort_descending_vector.cpp
)

target_include_directories(sort_descending_vector_lib PUBLIC include)

add_executable(sort_descending_vector_app
	src/main.cpp
)

target_link_libraries(sort_descending_vector_app
	sort_descending_vector_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(sort_descending_vector_test
    tests/sort_descending_vector_test.cpp
)

target_link_libraries(sort_descending_vector_test
    sort_descending_vector_lib
    GTest::gtest_main
)

gtest_discover_tests(sort_descending_vector_test)
