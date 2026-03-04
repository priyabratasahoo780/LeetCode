class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        vector<int> freq(101, 0);  // because 1 ≤ nums[i] ≤ 100
        
        // Count frequency
        for(int num : nums) {
            freq[num]++;
        }
        
        int sum = 0;
        
        // Add numbers that appear once
        for(int num : nums) {
            if(freq[num] == 1) {
                sum += num;
            }
        }
        
        return sum;
    }
};