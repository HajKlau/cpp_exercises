cmake_minimum_required(VERSION 3.10)
project(cpp_exercises_various)  #define the project name


enable_testing() #turns on the project's test handling

add_subdirectory(leetcode/minimum_number_of_operations) #Adds a subdirectory as part of the project, allowing its configuration to be managed separately.

add_subdirectory(leetcode/palindrome_number)

add_subdirectory(leetcode/count_chars)

add_subdirectory(leetcode/group_anagram)

add_subdirectory(leetcode/has_duplicates)

add_subdirectory(leetcode/two_sum)

add_subdirectory(leetcode/valid_parentheses)

add_subdirectory(leetcode/count_primes)

add_subdirectory(leetcode/search_insert_position)

add_subdirectory(leetcode/first_unique_char)

add_subdirectory(leetcode/reverse_number)

add_subdirectory(leetcode/reverse_string)

add_subdirectory(leetcode/sum_vector)

add_subdirectory(leetcode/sort_descending_vector)

add_subdirectory(leetcode/length_of_last_word)

add_subdirectory(leetcode/same_tree)