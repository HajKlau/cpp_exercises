#include "first_unique_char.h"
#include<unordered_map>
#include<string>
#include<iostream>

using namespace std;


int main() {
    string newString = "accomodation";
    int result = firstUniqueChar(newString);
    if(result != -1) {
        cout << "First unique character in string '" << newString << "' has index: [" << result << "]" << endl;

    } else {
        cout << "No unique character found in string '" << newString << "'" << endl; 
    }
    return 0;
}