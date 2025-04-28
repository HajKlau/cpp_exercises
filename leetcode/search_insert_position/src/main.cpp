#include "search_insert_position.h"
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int mytargetValue = 3;
    vector<int> myVector = {1, 2, 4};
    int result = searchInsert(myVector, mytargetValue);
    cout << result << endl;
}