#include "sum_vector.h"
#include <vector>

int sumVector(const std::vector<int>& nums) {
    int sum = 0;
    
    for (int num : nums) {
        sum += num;
    }
    return sum;
}