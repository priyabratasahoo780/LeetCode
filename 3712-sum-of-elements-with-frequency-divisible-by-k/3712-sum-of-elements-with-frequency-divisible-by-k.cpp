class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int>freq;
        
        for(int ans: nums){
            freq[ans]++;
        }
            for(auto &it: freq){
        //         if(nums.size() == 1 && it.first == 1){ 
        //           return 1;
        // }
//               if (nums.size() == 2) {
//     return nums[0] + nums[1];
// }
                if(it.second%k==0){
                sum += it.first*it.second;
            }
            // return sum;
          }
        //   if(sum % k == 0){
        //             return sum;
        //         }
          return sum;
    }
};



