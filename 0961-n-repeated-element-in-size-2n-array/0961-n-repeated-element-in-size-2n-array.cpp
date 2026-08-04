class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int ans: nums){
            freq[ans]++;
        }
          for(auto& it:freq){
               if(it.second == nums.size()/2){
                   return it.first;
               }
          }
          return -1;
    }
};