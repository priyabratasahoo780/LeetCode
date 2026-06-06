class Solution {
public:
    string removeDuplicates(string s, int k) {
        string result = "";
        unordered_map<int, int> mp;

        for (char ch : s) {
            result.push_back(ch);
        if (result.size() == 1 || result[result.size() - 2] != ch)
                mp[result.size() - 1] = 1;
            else
                mp[result.size() - 1] = mp[result.size() - 2] + 1;

            if (mp[result.size() - 1] == k) {
                for (int i = 0; i < k; i++) {
                    result.pop_back();
                }
            }
        }

        return result;    
    }
};
