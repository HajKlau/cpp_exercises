cmake_minimum_required(VERSION 3.10)

add_library(search_insert_position_lib
	src/search_insert_position.cpp
)

target_include_directories(search_insert_position_lib PUBLIC include)

add_executable(search_insert_position_app
	src/main.cpp
)

target_link_libraries(search_insert_position_app
	search_insert_position_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(search_insert_position_test
    tests/search_insert_position_test.cpp
)

target_link_libraries(search_insert_position_test
    search_insert_position_lib
    GTest::gtest_main
)

gtest_discover_tests(search_insert_position_test)
