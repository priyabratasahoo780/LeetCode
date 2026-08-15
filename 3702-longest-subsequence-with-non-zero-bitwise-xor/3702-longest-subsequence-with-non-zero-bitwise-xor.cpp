class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXor = 0;
        bool check = true;
        for(int num : nums){
            if(num != 0){
                check = false;
            }
            totalXor ^= num;
        }
           if(check){
            return 0;
           }
           if(totalXor != 0){
            return n;
           }
           return n-1;
    }
};