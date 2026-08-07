class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
                  sort(s.begin(), s.end());
                  sort(g.begin(), g.end());
        int i = 0;
        int j = 0;
        if(s.size() == 0){
            return 0;
        }
        while(i<=g.size()-1 && j<=s.size()-1){
            if(g[i] <= s[j]){
                i++;
                j++;
            }
            else if(g[i] >= s[j]){
                j++;
            }
        }
        return i;
    }
};