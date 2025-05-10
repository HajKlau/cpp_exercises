#include "sort_descending_vector.h"
#include<iostream>
#include<vector>
#include<algorithm>

void sortDescending(std::vector<int>& nums) {

    std::sort(nums.begin(), nums.end(), std::greater<int>());
}