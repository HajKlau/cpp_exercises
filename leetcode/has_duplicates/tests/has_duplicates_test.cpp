#include "has_duplicates.h"
#include<gtest/gtest.h>
#include<vector>
#include<string>
#include<climits>

TEST(HasDuplicatesTest, ReturnFalseForEmptyVector)
{
    std::vector<int> input = {};
    EXPECT_FALSE(hasDuplicates(input));
}


TEST(HasDuplicatesTest, ReturnTrueAllSameElements)
{
    std::vector<int> input = {1, 1, 1, 1};
    EXPECT_TRUE(hasDuplicates(input));
}

TEST(HasDuplicatesTest, ReturnTrueForTwoIdenticalElements)
{
    std::vector<int> input = {2, 2};
    EXPECT_TRUE(hasDuplicates(input));
}
TEST(HasDuplicatesTest, ReturnFalseForAllUniqueElements)
{
    std::vector<int> input = {1, 2, 3, 4};
    EXPECT_FALSE(hasDuplicates(input));
}

TEST(HasDuplicatesTest, ReturnTrueForMultipleDuplicates)
{
    std::vector<int> input = {1, 2, 1, 4, 4, 8, 2, 9, 12, 18, 20};
    EXPECT_TRUE(hasDuplicates(input));
}

TEST(HasDuplicatesTest, ReturnFalseForSingleElement)
{
    std::vector<int> input = {1};
    EXPECT_FALSE(hasDuplicates(input));
}

TEST(HasDuplicatesTest, ReturnTrueForLargeElements)
{
    std::vector<int> input = {INT_MAX, INT_MIN, 0, INT_MAX};
    EXPECT_TRUE(hasDuplicates(input));
}

TEST(HasDuplicatesTest, ReturnFalseForUniqueLargeElements)
{
    std::vector<int> input = {INT_MAX, INT_MIN, 0, 50, 100};
    EXPECT_FALSE(hasDuplicates(input));
}