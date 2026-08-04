class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int j = 1;
        for (int i = 0; i < nums.size(); i++) {
            while (j < nums[i]) {
                ans.push_back(j);
                j++;
            }
            if (j == nums[i])
                j++;
        }
        while (j <= nums.size()) {
            ans.push_back(j);
            j++;
        }
        return ans;
    }
};