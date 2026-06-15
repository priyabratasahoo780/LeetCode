class Solution {
public:
    bool checkIfPangram(string sentence) {
      unordered_set<int>check;
      for(char ch: sentence){
          check.insert(ch);
      }
      return check.size() == 26;
    }
};
