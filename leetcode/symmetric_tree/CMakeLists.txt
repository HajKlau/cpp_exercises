cmake_minimum_required(VERSION 3.10)

add_library(symmetric_tree_lib
	src/symmetric_tree.cpp
)

target_include_directories(symmetric_tree_lib PUBLIC include)

add_executable(symmetric_tree_app
	src/main.cpp
)

target_link_libraries(symmetric_tree_app
	symmetric_tree_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(symmetric_tree_test
    tests/symmetric_tree_test.cpp
)

target_link_libraries(symmetric_tree_test
    symmetric_tree_lib
    GTest::gtest_main
)

gtest_discover_tests(symmetric_tree_test)
