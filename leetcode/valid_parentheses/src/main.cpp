#include "valid_parentheses.h"
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
    string newString = "(){}[]";
    bool result = isValid(newString);
    cout << (result ? "true" : "false") << endl; 
    return 0;
}