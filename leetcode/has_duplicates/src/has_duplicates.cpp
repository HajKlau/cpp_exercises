#include "has_duplicates.h"
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool hasDuplicates(const vector<int>& nums) {

    unordered_set<int> newNums;

    for (int num : nums) {
        if (newNums.count(num)) {
            return true;
        } else {
            newNums.insert(num);
        }
    }
    return false;
}