cmake_minimum_required(VERSION 3.10)

add_library(same_tree_lib
	src/same_tree.cpp
)

target_include_directories(same_tree_lib PUBLIC include)

add_executable(same_tree_app
	src/main.cpp
)

target_link_libraries(same_tree_app
	same_tree_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(same_tree_test
    tests/same_tree_test.cpp
)

target_link_libraries(same_tree_test
    same_tree_lib
    GTest::gtest_main
)

gtest_discover_tests(same_tree_test)
