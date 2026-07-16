class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>ch;
        int left = 0;
        int ans = 0;
        for(int right=0; right<s.size(); right++){
            while(ch.count(s[right])){
                ch.erase(s[left]);
                left++;
            }
            ch.insert(s[right]);
         ans = max(ans,right-left+1);

        }
       
        return ans;
        //  unordered_map<char,int>ch;
        // int left = 0;
        // int ans = 0;
        // for(int right=0; right<s.size(); right++){
        //     ch[s[right]]++;
        //     while(s[right] > 1){
        //     ch[s[left]]--;
        //     left++;
        //     }
        //     ans = max(ans, right-left+1);
        // }
        // return ans;
    }
};


















