class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int sum = 0;

        for(int i = 0; i < k; i++){
            sum += arr[i];
        }

        int count = 0;

        if(sum >= k * threshold){
            count++;
        }
        int low = 0;
        int high = k - 1;

        while(high < arr.size() - 1){
            sum -= arr[low];
            low++;

            high++;
            sum += arr[high];

            if(sum >= k * threshold){
                count++;
            }
        }

        return count;
    }
};