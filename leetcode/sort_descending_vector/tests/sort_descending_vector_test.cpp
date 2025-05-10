#include "sort_descending_vector.h"
#include<gtest/gtest.h>
#include<climits>

TEST(SortDescendingVectorTest, ReturnZero_ForEmptyVector)
{
    std::vector<int> input = {};
    sortDescending(input);
    std::vector<int> expected = {};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnOne_ForSingleElement)
{
    std::vector<int> input = {1};
    sortDescending(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForTwoElements)
{
    std::vector<int> input = {1, 2};
    sortDescending(input);
    std::vector<int> expected = {2, 1};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForMixed)
{
    std::vector<int> input = {1, 2, 8, 4, 12, 15, 5};
    sortDescending(input);
    std::vector<int> expected = {15, 12, 8, 5, 4, 2, 1};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnElements_ForTwoSameElements)
{
    std::vector<int> input = {5, 5};
    sortDescending(input);
    std::vector<int> expected = {5, 5};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnElements_ForSameElements)
{
    std::vector<int> input = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    sortDescending(input);
    std::vector<int> expected = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForMixedWithTheSameElements)
{
    std::vector<int> input = {5, 5, 2, 8, 2, 8, 4, 12, 18, 22, 3};
    sortDescending(input);
    std::vector<int> expected = {22, 18, 12, 8, 8, 5, 5, 4, 3, 2, 2};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForMixedWithZero)
{
    std::vector<int> input = {5, 5, 2, 8, 2, 8, 0, 4, 12, 18, 22, 3};
    sortDescending(input);
    std::vector<int> expected = {22, 18, 12, 8, 8, 5, 5, 4, 3, 2, 2, 0};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnElement_ForZero)
{
    std::vector<int> input = {0};
    sortDescending(input);
    std::vector<int> expected = {0};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForZeroAndOther)
{
    std::vector<int> input = {0, 5};
    sortDescending(input);
    std::vector<int> expected = {5, 0};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForNegatives)
{
    std::vector<int> input = {-2, -1, -10, -15, -3};
    sortDescending(input);
    std::vector<int> expected = {-1, -2, -3, -10, -15};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForNegativeAndPositive)
{
    std::vector<int> input = {8, 10, -2, -1, -10, 1, -15, -3};
    sortDescending(input);
    std::vector<int> expected = {10, 8, 1, -1, -2, -3, -10, -15};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForLargeElements)
{
    std::vector<int> input = {555, 269, 123456, 1234567};
    sortDescending(input);
    std::vector<int> expected = {1234567, 123456, 555, 269};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnDescending_ForMaxAndMinInt)
{
    std::vector<int> input = {INT_MAX, 2, INT_MIN};
    sortDescending(input);
    std::vector<int> expected = {INT_MAX, 2, INT_MIN};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnElement_ForSingleNegative)
{
    std::vector<int> input = {-1};
    sortDescending(input);
    std::vector<int> expected = {-1};
    EXPECT_EQ(input, expected);
}

TEST(SortDescendingVectorTest, ReturnElement_ForDescendingMixed)
{
    std::vector<int> input = {30, 25, 20, 15, 10, 5, 4, 3, 2, 1, 0};
    sortDescending(input);
    std::vector<int> expected = {30, 25, 20, 15, 10, 5, 4, 3, 2, 1, 0};
    EXPECT_EQ(input, expected);
}





