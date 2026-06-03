#include <string>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        vector<string> strs;
        vector<int> counts;
        string current;
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            } else if (ch == '[') {
                counts.push_back(num);
                strs.push_back(current);
                num = 0;
                current.clear();
            } else if (ch == ']') {
                int repeat = counts.back();
                counts.pop_back();
                string prev = strs.back();
                strs.pop_back();
                string decoded;
                for (int i = 0; i < repeat; ++i) {
                    decoded += current;
                }
                current = prev + decoded;
            } else {
                current.push_back(ch);
            }
        }

        return current;
    }
};