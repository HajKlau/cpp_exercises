#include "reverse_number.h"
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

void reverseNumber(const vector<int>& v ) {
    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

}


