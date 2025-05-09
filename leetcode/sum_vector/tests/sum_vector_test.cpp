#include "sum_vector.h"
#include<gtest/gtest.h>
#include<climits>

TEST(SumVectorTest, ReturnZero_ForEmptyVector)
{
    std::vector<int> input = {};
    int expected = 0;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForSingleElement)
{
    std::vector<int> input = {1};
    int expected = 1;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForTwoPositiveElements)
{
    std::vector<int> input = {1, 2};
    int expected = 3;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnZero_ForZeroElements)
{
    std::vector<int> input = {0};
    int expected = 0;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnZero_ForTwoZeroElements)
{
    std::vector<int> input = {0, 0};
    int expected = 0;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForTwoSameElements)
{
    std::vector<int> input = {5, 5};
    int expected = 10;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForMixedElements)
{
    std::vector<int> input = {5, 10, 20, 3, 8};
    int expected = 46;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForRepeatedElements)
{
    std::vector<int> input = {1, 2, 1, 2, 1, 2, 1, 2};
    int expected = 12;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForLargeElements)
{
    std::vector<int> input = {1000, 5000, 300, 68520, 5555555};
    int expected = 5630375;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForMixedPositiveAndOneNegativeElements)
{
    std::vector<int> input = {1, 2, 3, 4, -5, 10, 15};
    int expected = 30;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForDifferentAndTwoNegativeElementsInVector)
{
    std::vector<int> input = {1, 2, 3, 4, -5, 10, 15, -15};
    int expected = 15;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForNegativeElements)
{
    std::vector<int> input = {-1, -2, -3, -4, -5, -6, -10};
    int expected = -31;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForSingleNegativeElements)
{
    std::vector<int> input = {-1};
    int expected = -1;
    EXPECT_EQ(sumVector(input), expected);
}

TEST(SumVectorTest, ReturnCorrectSum_ForIntMaxAndIntMin)
{
    std::vector<int> input = {INT_MAX, INT_MIN};
    int expected = -1;
    EXPECT_EQ(sumVector(input), expected);
}


