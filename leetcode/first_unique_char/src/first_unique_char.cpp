#include "first_unique_char.h"
#include<unordered_map>
#include<string>

using namespace std;

int firstUniqueChar(const string& s) { //return index the first, non-repeatable character.

    unordered_map<char, int> charCounter;

    for (char c : s) {

        charCounter[c]++;
    }

    for (int i = 0; i < s.length(); i++ ) {
        if (charCounter[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}
