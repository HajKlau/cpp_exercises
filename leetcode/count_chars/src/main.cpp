#include "count_chars.h"
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main() {
    
    string myString = "orange";
    unordered_map<char, int> result = countChar(myString);
    cout << "Counted word characters: " << myString << endl;
    printCounterChar(result);
    cout << endl;

}