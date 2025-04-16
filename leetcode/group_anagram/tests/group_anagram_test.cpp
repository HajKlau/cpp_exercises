#include "group_anagram.h"
#include<gtest/gtest.h>
#include<vector>
#include<string>

void sortGroups(std::vector<std::vector<std::string>>& groups)  //map sorting helper
{
    for (auto& group : groups) 
    {
        std::sort(group.begin(), group.end());
    }
    std::sort(groups.begin(), groups.end());
    }


TEST(GroupAnagramTest, EmptyVector)
{
    std::vector<std::string> input = {};
    auto result = groupAnagrams(input);
    EXPECT_TRUE(result.empty());
}

TEST(GroupAnagramTest, EmptyString)
{
    std::vector<std::string> input = {""};
    std::vector<std::vector<std::string>> expected = {{""}};
    auto result = groupAnagrams(input);
    EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, SameString)
{
    std::vector<std::string> input = {"eat", "eat"};
    std::vector<std::vector<std::string>> expected = {{"eat", "eat"}};
    auto result = groupAnagrams(input);
    sortGroups(result);
    sortGroups(expected);
    EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, MixedString)
{
    std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> expected = {{"eat", "tea", "ate"}, {"tan", "nat"}, {"bat"}};
    auto result = groupAnagrams(input);
    sortGroups(result);
    sortGroups(expected);
    EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, CaseSensitivity)
{
    std::vector<std::string> input = {"Eat", "tEa", "TAN", "ate", "nAt", "Bat"};
    std::vector<std::vector<std::string>> expected = {{"Eat", "tEa"}, {"TAN"}, {"ate"}, {"nAt"}, {"Bat"}};
    auto result = groupAnagrams(input);
    sortGroups(result);
    sortGroups(expected);
    EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, MixedWithEmpty)
{
    std::vector<std::string> input = {"eat", "tea", "tan", "", "nat", ""};
    std::vector<std::vector<std::string>> expected = {{"eat", "tea"}, {"tan", "nat"}, {"", ""}};
    auto result = groupAnagrams(input);
    sortGroups(result);
    sortGroups(expected);
    EXPECT_EQ(result, expected);
}

TEST(GroupAnagramTest, MixedWithEmptyAndCaseSensitive)
{
    std::vector<std::string> input = {"eAt", "TEa", "TAN", "", "nat", ""};
    std::vector<std::vector<std::string>> expected = {{"eAt"}, {"TEa"}, {"TAN"}, {"nat"}, {"", ""}};
    auto result = groupAnagrams(input);
    sortGroups(result);
    sortGroups(expected);
    EXPECT_EQ(result, expected);
}