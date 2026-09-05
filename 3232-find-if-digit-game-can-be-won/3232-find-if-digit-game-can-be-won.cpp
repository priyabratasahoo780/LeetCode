class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum = 0;
         int sumT = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=9){
                sum+= nums[i];
            }
            else{
                sumT += nums[i];
            }
        }
          if(sum > sumT || sum < sumT){
            return true;
          }
          return false;
    }
};