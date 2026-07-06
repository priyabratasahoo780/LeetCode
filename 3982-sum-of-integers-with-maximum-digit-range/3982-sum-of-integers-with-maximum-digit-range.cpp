class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int result = 0; int maxsRange = 0;
      for(int n : nums){
        int mins = 9; 
        int maxs = -1;
         int temp = n;
      while(temp > 0){
       mins = min(mins,temp%10);
       maxs = max(maxs,temp%10);
       temp /= 10; 
      }
      if(maxs - mins > maxsRange){
            maxsRange = maxs - mins;
                result = n;
      }
      else if(maxs - mins == maxsRange){
        result += n;
      } 
      }
     
      return result;
    }
};
