class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
        int maxs = INT_MIN;
        int mins = INT_MAX;
            for(int j=0; j<=i; j++){
            maxs = max(maxs, nums[j]);
            }
            for(int j=i; j<nums.size(); j++){
            mins = min(mins, nums[j]);
            }
                int res = maxs - mins;
                if(res <= k){
                    return i;
                }
        }
        return -1;
    }
};

