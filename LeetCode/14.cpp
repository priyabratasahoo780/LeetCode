class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int i = 0;
        while(i < first.size() && first[i] == last[i]){
            i++;
        }
        return first.substr(0, i);
        // string subString = strs[0];

        // for(int i = 1; i < strs.size(); i++) {
        //     while(strs[i].find(subString) != 0) {
        //         subString.pop_back();

        //         if(subString.empty()) return "";
        //     }
        // }

        // return subString;
    }
};

