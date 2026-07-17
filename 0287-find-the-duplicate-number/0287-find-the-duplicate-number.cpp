class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     unordered_map<int,int>freq;
     for(int i=0; i<nums.size(); i++){
        if(freq[nums[i]] == 0){
              freq[nums[i]] = 1;
        }
        else{
            return nums[i];
        }
     }
      return -1;
    }
};



























































 // unordered_set<set>s;
        // for(int i =0; i<nums.size(); ++i){
            // if(s.count(nums[i])){
                // return nums[i];
            // }
            // s.insert(nums[i])
        // }
        // return -1;