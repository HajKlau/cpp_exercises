#pragma once

#include<unordered_map>
#include<string>

std::unordered_map<char, int> countChar(const std::string& s);
void printCounterChar(const std::unordered_map<char, int>& counter);