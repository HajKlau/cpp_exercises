#include "palindrome_number.h"
#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(int number)
{
    if (number < 0)
    {
        return false;
    }

    vector<int> fromFrontNumber;
    vector<int> fromBackNumber;
    string numberToString = to_string(number);

    for (int i = 0; i < numberToString.size(); i++) 
    {
        fromFrontNumber.push_back(numberToString[i] - '0');
    }

    for(int j = numberToString.size() - 1; j >= 0; j--)
    {
        fromBackNumber.push_back(numberToString[j] - '0');
    }

    return fromFrontNumber == fromBackNumber;
}
