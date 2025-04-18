cmake_minimum_required(VERSION 3.10)
project(cpp_exercises_various)  #define the project name


enable_testing() #turns on the project's test handling

add_subdirectory(leetcode/minimum_number_of_operations) #Adds a subdirectory as part of the project, allowing its configuration to be managed separately.

add_subdirectory(leetcode/palindrome_number)

add_subdirectory(leetcode/count_chars)

add_subdirectory(leetcode/group_anagram)

add_subdirectory(leetcode/has_duplicates)

add_subdirectory(leetcode/two_sum)
