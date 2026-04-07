class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int count = 0;
        // int ele = 0;
        // for(int num : nums){
        //     if(count == 0){
        //         ele = num;
        //     }
        //     if(num == ele){
        //         count++;
        //     }
        //     else{
        //         count--;
        //     }
        // }
        // return ele;

        unordered_map<int,int>mp;
        for(int value : nums){
            mp[value]++;
            int freq = nums.size()/2;
            for(auto& it:mp){
                if(it.second > freq){
                    return it.first;
                }
            }
        }
        return -1;
    }
};