class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>result;
        for(int i=0; i<n; i++){
           int operation = start + 2 * i;
           result.push_back(operation);
        }
        int ans = result[0];
        for(int k = 1; k<n; k++){
             ans = ans ^ result[k];
        }
        return ans;
    }
};
