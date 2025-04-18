#include"two_sum.h"
#include<gtest/gtest.h>
#include<climits>

TEST(TwoSumTest, EmptyVector)
{
    std::vector<int> input = {};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, AllSameElementsNotReturningSum)
{
    std::vector<int> input = {1,1};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, MoreAllSameElementsNotReturningSum)
{
    std::vector<int> input = {1,1,1,1,1,1,1,1,1,1,1};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, RepeatedElementsReturningSum)
{
    std::vector<int> input = {1,2,1,2,1,2,1,2};
    int target = 3;
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, RepeatedElementsNotReturningSum)
{
    std::vector<int> input = {1,3,1,3,1,3,1,3};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, ShortVectorWithRepeatedElementsReturningSum)
{
    std::vector<int> input = {1,2};
    int target = 3;
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, ShortVectorWithRepeatedElementsNotReturningSum)
{
    std::vector<int> input = {1,3};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, DifferentElementsReturningSum)
{
    std::vector<int> input = {1, 8, 12, 3, 4, 1, 12, 5, 2, 1, 5, 4};
    int target = 3;
    std::vector<int> expected = {5, 8};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, DifferentElementsNotReturningSum)
{
    std::vector<int> input = {1, 8, 12, 3, 4, 12, 5, 5, 5, 4};
    int target = 3;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, SingleElementInVector)
{
    std::vector<int> input = {2};
    int target = 4;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}


TEST(TwoSumTest, TargetWithDuplicateElements)
{
    std::vector<int> input = {2, 2, 1};
    int target = 4;
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, TargetZeroWithNagativeElements)
{
    std::vector<int> input = {1, 5, -2, 1, 2};
    int target = 0;
    std::vector<int> expected = {2, 4};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, NegativeTargetWithNagativeElements)
{
    std::vector<int> input = {1, 5, -2, 1, 2, -3};
    int target = -5;
    std::vector<int> expected = {2, 5};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, PositiveTargetWithNagativesElements)
{
    std::vector<int> input = {-10, 1, 5, -2, 1, 2, -3};
    int target = 6;
    std::vector<int> expected = {1, 2};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, LargeTargetNotReturningSum)
{
    std::vector<int> input = {1, 3, 9};
    int target = 101;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, LargeTargetReturningSum)
{
    std::vector<int> input = {1, 300, 9, 50, 2, 80, 100, 13};
    int target = 101;
    std::vector<int> expected = {0, 6};
    EXPECT_EQ(twoSum(input, target), expected);
}

TEST(TwoSumTest, MaxTargetNotReturningSum)
{
    std::vector<int> input = {1, 3, 9};
    int target = INT_MAX;
    std::vector<int> expected = {};
    EXPECT_EQ(twoSum(input, target), expected);
}