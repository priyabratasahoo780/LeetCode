class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1;
        int missing = -1;

          vector<int>freq(n+1,0);

          for(int ans: nums){
            freq[ans]++;
          }

           for(int i=0; i<=n; i++){
            if(freq[i] == 2){
                duplicate = i;
            }
            else if(freq[i] == 0){
                missing = i;
            }
           }
           return {duplicate, missing};
    }
};