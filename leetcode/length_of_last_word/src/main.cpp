#include "length_of_last_word.h"
#include<iostream>
#include<string>

int main() {

    std::string myString = "Hello World";
    int result = lengthOfLastWord(myString);
    std::cout << "The last word have " << result << " characters" << std::endl; 
}