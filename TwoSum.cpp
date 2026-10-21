#include "TwoSum.hpp"

std::vector<int> Solution::twoSum(const std::vector<int> &nums, const int &target) {
   std::unordered_map<int, int> map;
   int pair;
   std::unordered_map<int, int>::const_iterator got;

   for (std::size_t i = 0; i < nums.size(); i++) {

      pair = target - nums[i];
      
      got = map.find(pair);
      if (got != map.end())
         return {static_cast<int>(got->second), static_cast<int>(i)};

      map.insert({nums[i], i});
   }

   return {};
}
