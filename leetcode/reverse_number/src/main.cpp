#include "reverse_number.h"
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main() {

    vector<int> myVector = {10, 20, 30, 40};
    cout << "Reverse number: ";
    reverseNumber(myVector);
    return 0;
}