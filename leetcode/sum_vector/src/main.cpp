#include "sum_vector.h"
#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6};
    int result = sumVector(myVector);
    std::cout << "Sum of vector: " << result << std::endl;
}