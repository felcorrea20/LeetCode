#include "gtest/gtest.h"
#include "PowerOfTwo.hpp"

TEST(PowerOfTwo, resultExpected)
{
   Solution solucao;
   bool result = solucao.isPowerOfTwo(16);
   ASSERT_TRUE(result);

   result = solucao.isPowerOfTwo(1);
   ASSERT_TRUE(result);

   result = solucao.isPowerOfTwo(3);
   ASSERT_FALSE(result);

   result = solucao.isPowerOfTwo(64);
   ASSERT_TRUE(result);
}

TEST(PowerOfTwo, maxNumber)
{
   Solution solucao;
   bool result = solucao.isPowerOfTwo(std::pow(2, 30));
   ASSERT_TRUE(result);
}

TEST(PowerOfTwo, minNumber)
{
   Solution solucao;
   bool result = solucao.isPowerOfTwo(std::pow(-2, 31));
   ASSERT_TRUE(result);
}
