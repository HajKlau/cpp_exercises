#include "palindrome_number.h"
#include<gtest/gtest.h>

TEST(IsPalindromeNumberTest, PositivePalindromes)
{
    EXPECT_TRUE(isPalindrome(121));
    EXPECT_TRUE(isPalindrome(0));
    EXPECT_TRUE(isPalindrome(12321));
    EXPECT_TRUE(isPalindrome(1));
}

TEST(IsPalindromeNumberTest, NonPalindromes)
{
    EXPECT_FALSE(isPalindrome(123));
    EXPECT_FALSE(isPalindrome(10));
    EXPECT_FALSE(isPalindrome(100));
}

TEST(IsPalindromeNumberTest, NegativePalindromes)
{
    EXPECT_FALSE(isPalindrome(-121));
    EXPECT_FALSE(isPalindrome(-1));
}