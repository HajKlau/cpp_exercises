#include "count_primes.h"
#include<gtest/gtest.h>

TEST(CountPrimesTest, EmptyInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(0), 0);
}

TEST(CountPrimesTest, OneInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(1), 0);
}

TEST(CountPrimesTest, TwoInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(2), 0);
}

TEST(CountPrimesTest, SmallInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(10), 4);
    EXPECT_EQ(solution.countPrime(15), 6);
    EXPECT_EQ(solution.countPrime(20), 8);
}

TEST(CountPrimesTest, LargeInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(100), 25);
    EXPECT_EQ(solution.countPrime(1000), 168);
}

TEST(CountPrimesTest, PrimeInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(7), 3);
    EXPECT_EQ(solution.countPrime(13), 5);
}

TEST(CountPrimesTest, ConsecutiveNumbersInput)
{
    SolutionOfCountPrimes solution;
    EXPECT_EQ(solution.countPrime(29), 9);
    EXPECT_EQ(solution.countPrime(30), 10);
    EXPECT_EQ(solution.countPrime(31), 10);
}