#include "length_of_last_word.h"
#include<iostream>
#include<string>

int lengthOfLastWord(std::string s) {
int counting = false;
int length = 0;

for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] != ' ') {
        counting = true;
        length++;
    }
    else if (counting) {
        break;
    }
}
return length;
}



    


