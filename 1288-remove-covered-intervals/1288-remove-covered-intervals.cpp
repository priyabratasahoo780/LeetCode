class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        for(int i=0; i<intervals.size(); i++){
        for(int j=0; j<intervals.size(); j++){
            if(i == j) continue;
            if(intervals[j][0] <= intervals[i][0] &&
              intervals[i][1] <= intervals[j][1]){
                count++;
                break;
              }
        }
        }
        return intervals.size() - count;
    }
};