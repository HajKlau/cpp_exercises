#include"two_sum.h"
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {

    unordered_map<int, int> numberToIndex;

    for (int i = 0; i < nums.size(); i++) {

        int currentNumber = nums[i];
        int complement = target - currentNumber;

        if (numberToIndex.count(complement)) {
            return {numberToIndex[complement], i};
        } else {
            numberToIndex[currentNumber] = i;
        }
    }
    return {};
}



    


