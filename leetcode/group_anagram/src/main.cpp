#include"group_anagram.h"
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {
    vector<string> myString = {};
    vector<vector<string>> grouped = groupAnagrams(myString);
    cout << "Grouped anagrams: " << endl;
    for (const auto& group : grouped) {
        cout << "[ ";
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
