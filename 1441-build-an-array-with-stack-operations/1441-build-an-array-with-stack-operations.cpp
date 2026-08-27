class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int pos = 0;
        for(int i = 1; i <= n && pos < target.size(); i++){
            v.push_back("Push");
            if(i != target[pos]){
                v.push_back("Pop");
            }
            else{
                pos++;
            }
        }
        return v;
    }
};
