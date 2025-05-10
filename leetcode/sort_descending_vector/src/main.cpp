#include "sort_descending_vector.h"
#include<iostream>
#include<vector>

int main() {
    std::vector<int> myVector = {5,1,6,2,4};
    sortDescending(myVector);
    
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
