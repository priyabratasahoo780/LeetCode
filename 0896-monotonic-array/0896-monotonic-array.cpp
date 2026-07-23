class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        bool inc = true;
        bool dec = true;

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] > nums[i-1]){
                dec = false;
            }

            if(nums[i] < nums[i-1]){
                inc = false;
            }
        }

        return inc || dec;
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums.size() > 3){
        //         if(i <= j && nums[i] <= nums[j] || i <= j && nums[i] >= nums[j]){
        //              return true;
        //         }
        //         }
        //         else if(nums.size() == 3 && nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};