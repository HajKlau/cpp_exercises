cmake_minimum_required(VERSION 3.10)

add_library(has_duplicates_lib
	src/has_duplicates.cpp
)

target_include_directories(has_duplicates_lib PUBLIC include)

add_executable(has_duplicates_app
	src/main.cpp
)

target_link_libraries(has_duplicates_app
        has_duplicates_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(has_duplicates_test
    tests/has_duplicates_test.cpp
)

target_link_libraries(has_duplicates_test
    has_duplicates_lib
    GTest::gtest_main
)

gtest_discover_tests(has_duplicates_test)
