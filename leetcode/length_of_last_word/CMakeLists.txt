cmake_minimum_required(VERSION 3.10)

add_library(length_of_last_word_lib
	src/length_of_last_word.cpp
)

target_include_directories(length_of_last_word_lib PUBLIC include)

add_executable(length_of_last_word_app
	src/main.cpp
)

target_link_libraries(length_of_last_word_app
	length_of_last_word_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(length_of_last_word_test
    tests/length_of_last_word_test.cpp
)

target_link_libraries(length_of_last_word_test
    length_of_last_word_lib
    GTest::gtest_main
)

gtest_discover_tests(length_of_last_word_test)
