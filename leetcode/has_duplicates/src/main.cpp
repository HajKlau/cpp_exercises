#include "has_duplicates.h"
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main() {
    cout << std::boolalpha;
    vector<int> myVector = {1, 2, 3, 4, 2, 8};
    bool result = hasDuplicates(myVector);
    cout << "If vector has duplicates?: " << result << endl;
    return 0;
}
