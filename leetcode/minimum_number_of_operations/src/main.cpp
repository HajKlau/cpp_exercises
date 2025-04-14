#include "minimum_number_of_operations.h"
#include<iostream>
#include<vector>

using namespace std;

int main() 
{
    vector<int> myVector = {2,2,4,7,1,4,8,0,0,5,6,8,9,3,8,8,8,1,2,7};
    int result = minimumNumberOfOperations(myVector);
    cout << "Minimum numbers of operations to make elements in array distinct: " << result << endl;
    return 0;
}