class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>result;
        result.push_back(pref[0]);
        for(int i=1; i<pref.size(); i++){
            int ans = pref[i-1]^ pref[i];
            result.push_back(ans);
        }

        return result;
    }
};