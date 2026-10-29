#include "gtest/gtest.h"
#include "src/RemoveDuplicatesFromSortedArray.hpp"

TEST(RemoveDuplicatesFromSortedArray, randomValues)
{
    Solution solucao;

    std::vector<int> repeated_values{1, 1, 2};
    std::vector<int> unique_values{1, 2};

    int result = solucao.removeDuplicates(repeated_values);
    
    ASSERT_EQ(result, unique_values.size());

    for (int i = 0; i < result; i++) {
        ASSERT_EQ(repeated_values[i], unique_values[i]);
    }

    repeated_values.clear();
    unique_values.clear();

    repeated_values = {0,0,1,1,1,2,2,3,3,4};
    unique_values = {0,1,2,3,4};

    result = solucao.removeDuplicates(repeated_values);
    
    ASSERT_EQ(result, unique_values.size());

    for (int i = 0; i < result; i++) {
        ASSERT_EQ(repeated_values[i], unique_values[i]);
    }
}

TEST(RemoveDuplicatesFromSortedArray, voidArray)
{
    Solution solucao;
    std::vector<int> repeated_values;

    auto result = solucao.removeDuplicates(repeated_values);
    ASSERT_EQ(result, 0);
}