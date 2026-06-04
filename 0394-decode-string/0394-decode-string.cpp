class Solution {
public:
    string solve(string &s, int &i) {
        // vector<string> strs;
        // vector<int> counts;
        // string current;
        // int num = 0;

        // for (char ch : s) {
        //     if (isdigit(ch)) {
        //         num = num * 10 + (ch - '0');
        //     } else if (ch == '[') {
        //         counts.push_back(num);
        //         strs.push_back(current);
        //         num = 0;
        //         current.clear();
        //     } else if (ch == ']') {
        //         int repeat = counts.back();
        //         counts.pop_back();
        //         string prev = strs.back();
        //         strs.pop_back();
        //         string decoded;
        //         for (int i = 0; i < repeat; ++i) {
        //             decoded += current;
        //         }
        //         current = prev + decoded;
        //     } else {
        //         current.push_back(ch);
        //     }
        // }

        // return current;
        string result = "";

        while (i < s.size() && s[i] != ']') {
            
            if (isalpha(s[i])) {
                result += s[i];
                i++;
            }
            else if (isdigit(s[i])) {
                int num = 0;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string temp = solve(s, i);

                i++; // skip ']'

                while (num--) {
                    result += temp;
                }
            }
        }

        return result;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};