#include"search_insert_position.h"
#include<climits>
#include<gtest/gtest.h>


TEST(SearchInsertPositionTest, InsertAtBeginningWhenVectorIsEmpty)
{
    std::vector<int> input= {};
    int target = 3;
    EXPECT_EQ(searchInsert(input, target), 0);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenTargetExistInVector)
{
    std::vector<int> input= {1, 2, 3};
    int target = 2;
    EXPECT_EQ(searchInsert(input, target), 1);
}

TEST(SearchInsertPositionTest, ReturnFirstIndexWhenTargetSameLikeElementsInVector)
{
    std::vector<int> input= {3, 3, 3};
    int target = 3;
    EXPECT_EQ(searchInsert(input, target), 0);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorIsLargeAndTargetIsSmall)
{
    std::vector<int> input= {150, 1000, 5356};
    int target = 5;
    EXPECT_EQ(searchInsert(input, target), 0);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorIsSmallAndTargetIsLarge)
{
    std::vector<int> input= {1,  2, 3};
    int target = 5000;
    EXPECT_EQ(searchInsert(input, target), 3);
}

TEST(SearchInsertPositionTest, ReturnFirstIndexWhenTargetIsZero)
{
    std::vector<int> input= {5, 10, 15, 50, 60};
    int target = 0;
    EXPECT_EQ(searchInsert(input, target), 0);
}

TEST(SearchInsertPositionTest, ReturnFirstIndexWhenTargetIsNegative)
{
    std::vector<int> input= {5, 10, 15, 50, 60};
    int target = -1;
    EXPECT_EQ(searchInsert(input, target), 0);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorHasOneElement)
{
    std::vector<int> input= {5};
    int target = 6;
    EXPECT_EQ(searchInsert(input, target), 1);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorHasTwoElements)
{
    std::vector<int> input= {5, 10};
    int target = 15;
    EXPECT_EQ(searchInsert(input, target), 2);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorHasTwoSameElements)
{
    std::vector<int> input= {5, 5};
    int target = 15;
    EXPECT_EQ(searchInsert(input, target), 2);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenTargetIsInsideTheRange)
{
    std::vector<int> input= {1, 2, 5, 9, 10};
    int target = 8;
    EXPECT_EQ(searchInsert(input, target), 3);
}

TEST(SearchInsertPositionTest, ReturnFirstIndexWhenVectorIsNegativeAndTargetIsPositive)
{
    std::vector<int> input= {-15, -10, -8, -2};
    int target = 4;
    EXPECT_EQ(searchInsert(input, target), 4);
}

TEST(SearchInsertPositionTest, ReturnIndexWhenVectorWithMinAndMaxValue)
{
    std::vector<int> input= {INT_MIN,  INT_MAX};
    int target = 0;
    EXPECT_EQ(searchInsert(input, target), 1);
}