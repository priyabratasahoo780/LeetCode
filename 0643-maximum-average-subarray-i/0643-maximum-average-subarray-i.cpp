class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int low = 0;
        int high = k - 1;

        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        int maxSum = sum;

        
        while(high < nums.size() - 1){
            sum -= nums[low];
            low++;

            high++;
            sum += nums[high];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};