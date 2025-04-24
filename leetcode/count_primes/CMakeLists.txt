cmake_minimum_required(VERSION 3.10)

add_library(count_primes_lib
	src/count_primes.cpp
)

target_include_directories(count_primes_lib PUBLIC include)

add_executable(count_primes_app
	src/main.cpp
)

target_link_libraries(count_primes_app
        count_primes_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(count_primes_test
    tests/count_primes_test.cpp
)

target_link_libraries(count_primes_test
    count_primes_lib
    GTest::gtest_main
)

gtest_discover_tests(count_primes_test)
