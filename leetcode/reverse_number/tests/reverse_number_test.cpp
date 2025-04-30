#include "valid_parentheses.h"
#include<gtest/gtest.h>


TEST(ValidParenthesesTest, ReturnFalseForEmptyString)
{
    std::string input = "";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForStringWithWhiteSpace)
{
    std::string input = " ";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnTrueForOnePairOfParentheses)
{
    std::string input = "()";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnTrueForOnePairOfParenthesesSecondCase)
{
    std::string input = "{}";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForOnePairOfParentheses)
{
    std::string input = "(}";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForOnePairOfParenthesesSecondCase)
{
    std::string input = "[)}";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnTrueForDifferentParentheses)
{
    std::string input = "(){}[]";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnTrueForDifferentParenthesesInAnotherOrder)
{
    std::string input = "[{()}]";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForDifferentParentheses)
{
    std::string input = "(}{}[]";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForDifferentParenthesesInAnotherOrder)
{
    std::string input = "[{()})";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForDifferentParenthesesWithSpecialCharacters)
{
    std::string input = "(){#}[]";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForDifferentParenthesesWithWhiteSpace)
{
    std::string input = "(){ }[]";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForDifferentParenthesesWithSpecialCharacterAndWhiteSpace)
{
    std::string input = "(){ }[#]";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForUncloseOpeningParentheses)
{
    std::string input = "[({";
    EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnTrueForLongValidParentheses)
{
    std::string input = "(([]){})[()]{[]}{}((()))";
    EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTest, ReturnFalseForLongInvalidParentheses)
{
    std::string input = "[[[[[[[[[[[[[[[[[";
    EXPECT_FALSE(isValid(input));
}