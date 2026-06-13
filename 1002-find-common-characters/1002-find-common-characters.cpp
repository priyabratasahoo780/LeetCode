class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string result = "";

        for (char ch : words[0]) {
            bool found = true;

            for (int i = 1; i < words.size(); i++) {
                int pos = words[i].find(ch);

                if (pos == string::npos) {
                    found = false;
                    break;
                }

                words[i].erase(pos, 1);
            }

            if (found) {
                result.push_back(ch);
            }
        }

        vector<string> ans;

        for (char ch : result) {
            ans.push_back(string(1, ch));
        }

        return ans;
    }
};