class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int given = 1;
        int i = 0;
        while(candies > 0){
            ans[i] += min(candies,given);
            candies -= given;
            given++;
            i = (i+1)%num_people;
        }
        return ans; 
    }
};