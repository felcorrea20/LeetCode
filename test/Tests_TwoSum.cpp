#include "gtest/gtest.h"
#include "TwoSum.hpp"

TEST(TwoSum, example)
{
   Solution solucao;
   std::vector<int> nums = {2, 7, 11, 15};
   int target = 9;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 0);
   EXPECT_EQ(result[1], 1);
}

TEST(TwoSum, numbersInReverseOrder)
{
   Solution solucao;
   std::vector<int> nums = {7, 2, 11, 15};
   int target = 9;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 0);
   EXPECT_EQ(result[1], 1);
}

TEST(TwoSum, numbersInMiddle)
{
   Solution solucao;
   std::vector<int> nums = {1, 3, 7, 2, 5};
   int target = 9;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 2);
   EXPECT_EQ(result[1], 3);
}

TEST(TwoSum, negativeNumbers)
{
   Solution solucao;
   std::vector<int> nums = {-1, -2, -3, -4, -5};
   int target = -8;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 2);
   EXPECT_EQ(result[1], 4);
}

TEST(TwoSum, withZero)
{
   Solution solucao;
   std::vector<int> nums = {0, 4, 3, 0};
   int target = 0;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 0);
   EXPECT_EQ(result[1], 3);
}

TEST(TwoSum, mixedPositiveNegative)
{
   Solution solucao;
   std::vector<int> nums = {-3, 4, 3, 90};
   int target = 0;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 0);
   EXPECT_EQ(result[1], 2);
}

TEST(TwoSum, minimumArray)
{
   Solution solucao;
   std::vector<int> nums = {3, 3};
   int target = 6;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 0);
   EXPECT_EQ(result[1], 1);
}

TEST(TwoSum, duplicateNumbers)
{
   Solution solucao;
   std::vector<int> nums = {2, 5, 5, 11};
   int target = 10;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 1);
   EXPECT_EQ(result[1], 2);
}

TEST(TwoSum, largeNumbers)
{
   Solution solucao;
   std::vector<int> nums = {1000000, 2000000, 3000000};
   int target = 5000000;
   auto result = solucao.twoSum(nums, target);
   EXPECT_EQ(result.size(), 2);
   EXPECT_EQ(result[0], 1);
   EXPECT_EQ(result[1], 2);
}
