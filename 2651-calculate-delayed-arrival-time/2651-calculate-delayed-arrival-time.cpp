class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum = 0;
        int i = 24;
        sum += (arrivalTime + delayedTime);
        if(sum < i){
            return sum;
        }
        else if(sum > i){
              return sum - i;
        }
          return 0;
    }
};