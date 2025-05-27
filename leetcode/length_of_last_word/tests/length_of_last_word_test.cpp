#include "length_of_last_word.h"
#include<gtest/gtest.h>


TEST(LengthOfLastWordTest, ReturnZeroForOneWord)
{
    std::string input = "";
    int expected = 0;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForOneWord)
{
    std::string input = "Orange";
    int expected = 6;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForTwoWord)
{
    std::string input = "Orange Pen";
    int expected = 3;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithWhiteSpaceOnEnd)
{
    std::string input = "Orange Pen ";
    int expected = 3;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithCaseSensitive)
{
    std::string input = "OrAnge PEn";
    int expected = 3;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithSpecialCharacters)
{
    std::string input = "OrAnge Pen$%!";
    int expected = 6;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithSpecialCharactersAndWhiteSpace)
{
    std::string input = "OrAnge Pen$%! ";
    int expected = 6;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithDigits)
{
    std::string input = "OrAnge Pen123";
    int expected = 6;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithDigitsAndSpecialCharacters)
{
    std::string input = "OrAnge Pen123!%";
    int expected = 8;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForWordWithDigitsAndSpecialCharactersAndWhiteSpace)
{
    std::string input = "OrAnge Pen123!% ";
    int expected = 8;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForLargeWord)
{
    std::string input = "OrAnge hdufuhaeiufheufhwefhweiufhweufhwefhewuifhweuifhewfhewuhfewfhwehfhwefhweif";
    int expected = 73;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForMultipleSpacesBetwenWords)
{
    std::string input = "One    Orange        here";
    int expected = 4;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForMultipleTrailingSpaces)
{
    std::string input = "One         ";
    int expected = 3;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}

TEST(LengthOfLastWordTest, ReturnResultForLeadingSpaces)
{
    std::string input = "         One";
    int expected = 3;
    EXPECT_EQ(lengthOfLastWord(input), expected);
}