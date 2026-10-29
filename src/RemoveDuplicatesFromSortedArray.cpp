#include "RemoveDuplicatesFromSortedArray.hpp"

int Solution::removeDuplicates(std::vector<int> &nums) {

   if (nums.empty())
      return 0;

   std::size_t k = 1;

   for (std::size_t i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[k-1])
         nums[k++] = nums[i];
   }

   return static_cast<int>(k);
}
