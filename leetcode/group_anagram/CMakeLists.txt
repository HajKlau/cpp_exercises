cmake_minimum_required(VERSION 3.10)

add_library(group_anagram_lib
	src/group_anagram.cpp
)

target_include_directories(group_anagram_lib PUBLIC include)

add_executable(group_anagram_app
	src/main.cpp
)

target_link_libraries(group_anagram_app
        group_anagram_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(group_anagram_test
    tests/group_anagram_test.cpp
)

target_link_libraries(group_anagram_test
    group_anagram_lib
    GTest::gtest_main
)

gtest_discover_tests(group_anagram_test)
