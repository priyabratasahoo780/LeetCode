class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> St;
      int left = 0;
      int ans = 0;
        for(int right = 0; right < s.size(); right++) {
            while(St.count(s[right])){
                St.erase(s[left]);
                left++;
            }
            St.insert(s[right]);
          ans = max(ans, right - left + 1);
        }
             return ans;
    }
};