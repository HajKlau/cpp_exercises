#include "minimum_number_of_operations.h"
#include<gtest/gtest.h>
#include<vector>

TEST(MinimumNumberOfOperationsTest, EmptyVector) 
{
    std::vector<int> empty_vec = {};
    EXPECT_EQ(minimumNumberOfOperations(empty_vec), 0);
}

TEST(MinimumNumberOfOperationsTest, AllUnique) 
{
    std::vector<int> unique_vec = {1, 2, 3};
    EXPECT_EQ(minimumNumberOfOperations(unique_vec), 0);
}

TEST(MinimumNumberOfOperationsTest, AllSame)
{
    std::vector<int> all_same_vec = {2, 2, 2, 2};
    EXPECT_EQ(minimumNumberOfOperations(all_same_vec), 1);
}

TEST(MinimumNumberOfOperationsTest, Mixed)
{
    std::vector<int> duplicate_vec = {2,2,4,7,1,4,8,0,0,5,6,8,9,3,8,8,8,1,2,7};
    EXPECT_EQ(minimumNumberOfOperations(duplicate_vec), 6);
}

TEST(MinimumNumberOfOperationsTest, ShorterThanThree)
{
    std::vector<int> shorter_than_three_vec = {5, 5};
    EXPECT_EQ(minimumNumberOfOperations(shorter_than_three_vec), 1);
}

TEST(MinimumNumberOfOperationsTest, ThreeRepeatsElements) 
{
    std::vector<int> shorter_than_three_vec = {5, 5, 5};
    EXPECT_EQ(minimumNumberOfOperations(shorter_than_three_vec), 1);
}

TEST(MinimumNumberOfOperationsTest, AlternatingRepeats) 
{
    std::vector<int> shorter_than_three_vec = {2, 4, 2, 4, 2, 4, 2, 4, 2, 4};
    EXPECT_EQ(minimumNumberOfOperations(shorter_than_three_vec), 3);
}
