class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
         int digit = 0;
        for(int num : nums){
            sum += num;
            while(num>0){
                digit += num%10;
                num /= 10;
            }
        }
        return abs(sum - digit);
    }
};