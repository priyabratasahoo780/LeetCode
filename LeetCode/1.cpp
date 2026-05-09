#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    int l = 0;
    int r = nums.size() - 1;
    while (l < r)
    {
      int sum = nums[l] + nums[r];
      if (sum == target)
      {
        return {l, r};
      }
      if (sum <= target)
      {
        l++;
      }
      else
      {
        r--;
      }
    }
    return {};
  }
};

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  Solution sol;
  vector<int> result = sol.twoSum(nums, target);
  for (int index : result)
  {
    cout << index << " ";
  }
  cout << endl;
  return 0;
}