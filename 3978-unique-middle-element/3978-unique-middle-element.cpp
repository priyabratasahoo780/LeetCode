class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = nums.size()/2;
        int middleElement = nums[mid];
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if( middleElement == nums[i]){
                count++;
            }
        }
        if(count == 1){
            return true;
        }
        return false;
    }
};