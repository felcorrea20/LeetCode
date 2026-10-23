#include "gtest/gtest.h"
#include "src/AddDigits.hpp"

TEST(AddDigits, randomValues)
{
    Solution solucao;

    ASSERT_EQ(solucao.addDigits(38), 2);
    ASSERT_EQ(solucao.addDigits(38002), 4);
    ASSERT_EQ(solucao.addDigits(145), 1);
    ASSERT_EQ(solucao.addDigits(0), 0);
    ASSERT_EQ(solucao.addDigits(5), 5);
    ASSERT_EQ(solucao.addDigits(5874653), 2);
}
 