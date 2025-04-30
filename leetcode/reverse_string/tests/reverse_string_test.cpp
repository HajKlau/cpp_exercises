#include "reverse_string.h"
#include<string>
#include<gtest/gtest.h>


TEST(ReverseStringTest, ReturnFalse_WhenStringIsEmpty)
{
    std::string input = "";
    EXPECT_TRUE(reverseString(input).empty());
}

TEST(ReverseStringTest, ReturnSameString_WhenOnlyOneChar)
{
    std::string input = "a";
    std::string expected = "a";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasTwoDifferentChar)
{
    std::string input = "ab";
    std::string expected = "ba";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnSame_WhenStringHasTwoSameChar)
{
    std::string input = "aa";
    std::string expected = "aa";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasDifferentChars)
{
    std::string input = "animal";
    std::string expected = "lamina";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringIsLong)
{
    std::string input = "animalisorangeandblackandhavedifferentname";
    std::string expected = "emantnereffidevahdnakcalbdnaegnarosilamina";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasWhiteSpace)
{
    std::string input = "ora nge";
    std::string expected = "egn aro";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasWhiteSpaceAndSpecialChars)
{
    std::string input = "or#a ng^e";
    std::string expected = "e^gn a#ro";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasSpecialChars)
{
    std::string input = "or#ang^e";
    std::string expected = "e^gna#ro";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasDigitsAndLetters)
{
    std::string input = "1a2b";
    std::string expected = "b2a1";
    EXPECT_EQ(reverseString(input), expected);
}

TEST(ReverseStringTest, ReturnReverseString_WhenStringHasDigits)
{
    std::string input = "1234";
    std::string expected = "4321";
    EXPECT_EQ(reverseString(input), expected);
}



