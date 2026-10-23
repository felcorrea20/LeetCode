#include <iostream>
#include <vector>
#include <map>

using namespace std;

void mostraVector(const vector<int> &nums)
{
   for (int i = 0; i < nums.size; i++)
   {
      cout << nums[i] << endl;
   }
}

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
      unordered_map<int, int> map;

      for (int i = 0; i < nums.size(); i++){
         
         if (map.count(i) > 0)
            nums[i] = NULL;
         else
            map.insert({{i,i}});
      }

      mostraVector(nums);

      return 0;
    }
};

int main()
{
   Solution solution;
   vector<int> nums;
   nums.push_back(1);
   nums.push_back(1);
   nums.push_back(2);
   nums.push_back(2);

   int result = solution.removeDuplicates(nums);
   cout << "Resultado: " << result << endl;

   return 0;
}
