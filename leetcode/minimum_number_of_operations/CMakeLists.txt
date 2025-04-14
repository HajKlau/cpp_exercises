cmake_minimum_required(VERSION 3.10)

add_library(minimum_number_of_operations_lib
	src/minimum_number_of_operations.cpp
)

target_include_directories(minimum_number_of_operations_lib PUBLIC include)

add_executable(minimum_number_of_operations_app
	src/main.cpp
)

target_link_libraries(minimum_number_of_operations_app
	minimum_number_of_operations_lib
)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(minimum_number_of_operations_test
    tests/minimum_number_of_operations_test.cpp
)

target_link_libraries(minimum_number_of_operations_test
    minimum_number_of_operations_lib
    GTest::gtest_main
)

gtest_discover_tests(minimum_number_of_operations_test)
	
