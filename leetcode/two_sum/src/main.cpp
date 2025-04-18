#include "two_sum.h"
#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> myVector = {1, 2, 3, 4, 5};
    int myTargetNumber = 3;
    vector<int> result = twoSum(myVector, myTargetNumber);
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << "], [" << result[1] << "] " << endl;
    } else {
        cout << "No solution found" << endl;
    }
    return 0;

    }
    