#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {

public:
   vector<int> twoSum(const vector<int> &nums, const int &target) {
      unordered_map<int, int> map;
      int pair;
      unordered_map<int, int>::const_iterator got;

      for (size_t i = 0; i < nums.size(); i++) {

         pair = target - nums[i];
         
         got = map.find(pair);
         if (got != map.end())
            return {static_cast<int>(got->second), static_cast<int>(i)};

         map.insert({nums[i], i});

      }

      return {};
   }
};

int main() {   

   Solution solu;
   auto result = solu.twoSum({1,2,4,3}, 6);
   if (result.empty()) {
      cout << "Nenhuma solução encontrada" << endl;
      return 0;
   }

   cout << "Resultado da busca: " << endl;
   for (int index : result)
      cout << index << endl;

   return 0;
}
