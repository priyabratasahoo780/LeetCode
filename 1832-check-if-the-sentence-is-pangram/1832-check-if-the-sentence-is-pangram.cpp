class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>check;
        for(char s : sentence){
           check.insert(s);
        }
        return check.size() == 26;
    }
};
