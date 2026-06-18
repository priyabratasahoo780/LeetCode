class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        int diff = (b - a) - k*2;
        return max(0,diff);
    }
};