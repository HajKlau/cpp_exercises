#include"first_unique_char.h"
#include<gtest/gtest.h>


TEST(FirstUniqueCharTest, ReturnMinusOne_WhenStringIsEmpty)
{
    std::string input = "";
    int expected = -1;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnMinusOne_WhenNoUniqueCharsInShortString)
{
    std::string input = "aa";
    int expected = -1;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnMinusOne_WhenLargeStringNoHaveUniqueChars)
{
    std::string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int expected = -1;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenShortStringHasOnlyUniqueChars)
{
    std::string input = "abcd";
    int expected = 0;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenLargeStringHasOnlyUniqueChars)
{
    std::string input = "abcdefghijklmnoprstuwyzqx";
    int expected = 0;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenStringHasDifferentChars)
{
    std::string input = "accomodation";
    int expected = 4;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenStringHasWhiteSpaces)
{
    std::string input = "ab b ca";
    int expected = 5;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenStringHasSpecialCharacters)
{
    std::string input = "ab%b#c%&a";
    int expected = 4;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenStringHasSpecialCharactersAndWhiteSpaces)
{
    std::string input = "ab% b#c%&a";
    int expected = 3;
    EXPECT_EQ(firstUniqueChar(input), expected);
}

TEST(FirstUniqueCharTest, ReturnIndex_WhenStringHasOneChar)
{
    std::string input = "a";
    int expected = 0;
    EXPECT_EQ(firstUniqueChar(input), expected);
}