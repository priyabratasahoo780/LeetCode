class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>check;
        for(int i=0; i<nums.size(); i++){
            check[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if( check[nums[i]] == 1){
            if(nums[i]%2==0){
                return nums[i];
            }
            }
        }
        return -1;
    }
};

