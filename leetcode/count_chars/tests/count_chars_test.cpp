#include "count_chars.h"
#include<gtest/gtest.h>
#include<string>
#include<unordered_map>

TEST(CountCharsTest, EmptyString)
{
    std::string empty_string = " ";
    unordered_map<char, int> result = countChar(empty_string);
    EXPECT_TRUE(result.empty());
}

TEST(CountCharsTest, AllSameChars)
{
    std::string all_same_chars_string = "ooo"
    std::unordered_map<char, int> result = countChar(all_same_chars_string)
    EXPECT_EQ(result['o'], 3);
    EXPECT_EQ(result.size(), 1)
}

TEST(CountCharsTest, AllUniqueChars)
{
    std::string unique_chars_string = "abcd";
    std::unordered_map<char, int> result = countChar(unique_chars_string);
    EXPECT_EQ(result['a'], 1);
    EXPECT_EQ(result['b'], 1);
    EXPECT_EQ(result['c'], 1);
    EXPECT_EQ(result['d'], 1);
    EXPECT_EQ(result.size(), 4);
}

TEST(CountCharsTest, MixedChars)
{
    std::string mixed_chars_string = "accommodation";
    std::unordered_map<char, int> result = countChar(mixed_chars_string);
    EXPECT_EQ(result['a'], 2);
    EXPECT_EQ(result['c'], 2);
    EXPECT_EQ(result['o'], 2);
    EXPECT_EQ(result['m'], 2);
    EXPECT_EQ(result['d'], 1);
    EXPECT_EQ(result['t'], 1);
    EXPECT_EQ(result['i'], 1);
    EXPECT_EQ(result['n'], 1);
}

TEST(CountCharsTest, CaseSensitivity)
{
    std::string case_sensitive_string = "AaBb";
    std::unordered_map<char, int> result = countChar(case_sensitive_string);
    EXPECT_EQ(result['A'], 1);
    EXPECT_EQ(result['a'], 1);
    EXPECT_EQ(result['B'], 1);
    EXPECT_EQ(result['b'], 1);
    EXPECT_EQ(result.size(), 4);
}

TEST(CountCharsTest, WithSpacesAndSpecialChars)
{
    std::string special_chars = "a a!b@";
    std::unordered_map<char, int> result = countChar(special_chars);
    EXPECT_EQ(result['a'], 2);
    EXPECT_EQ(result[' '], 1);
    EXPECT_EQ(resul['!'], 1);
    EXPECT_EQ(result['b'], 1);
    EXPECT_EQ(result['@'], 1);
    EXPECT_EQ(result.size(), 5);
}