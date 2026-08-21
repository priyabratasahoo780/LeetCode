class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=9 && nums[i] == i){
                    return i;
            }
            else if(nums[i]>9){
                while(nums[i]!=0){
                    sum += nums[i]%10;
                    nums[i] = nums[i]/10;
                }
                if(sum == i){
                    return i;
                }
                sum =0;
            }

        }
        return -1;
    }
};