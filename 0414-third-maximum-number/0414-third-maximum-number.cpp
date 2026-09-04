class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            return max(nums[0],nums[1]);
        }
         long int first = nums[0];
         long int second = LONG_MIN; 
      long int third = LONG_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>first){
             third = second;
          second = first;
          first = nums[i];
        }
        else if(nums[i]>second && nums[i]!=first){
          third = second;
          second = nums[i];
        }
        else if(nums[i]>third && nums[i]!=second && nums[i]!=first){
          third = nums[i];
        }
    }
    if(third == LONG_MIN){
        return first;
    }
    return third;
    }
};