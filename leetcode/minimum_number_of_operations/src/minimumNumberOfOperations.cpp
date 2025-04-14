#include "minimum_number_of_operations.h"
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int minimumNumberOfOperations(vector<int>& numbers) 
{
   unordered_set<int> setForSizeComparison;
   int operationsNumber = 0;

    while (true)
    {
        setForSizeComparison.clear();
        for (int numbersInVector : numbers) 
        {
            setForSizeComparison.insert(numbersInVector);
        }

        if (setForSizeComparison.size() == numbers.size() || numbers.empty())
        {
            break;
        }

        int elementsToRemove = min(3, (int)numbers.size());
        numbers.erase(numbers.begin(), numbers.begin() + elementsToRemove);
        operationsNumber++;

    }
    
cout << endl;
return operationsNumber;

}


/* 
edge-case:
-empty vector
-every elements of vector is unique
-every elements in vector are the same
-vector is shorter than three elements

Time Complexity: O(n^2)
Space Complexity: O(n)
*/