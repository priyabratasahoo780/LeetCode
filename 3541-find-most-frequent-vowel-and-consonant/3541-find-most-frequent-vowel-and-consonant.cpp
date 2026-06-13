class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int, int>freq;
        for(char ch : s){
             freq[ch]++;
        }
        int maxVowels = 0;
        int maxConsonant = 0;
        for(auto it : freq){
          char ch = it.first;
          int count = it.second;
          if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            maxVowels = max(maxVowels, count);
          }
          else {
            maxConsonant = max(maxConsonant, count);

          }
        }
        return maxVowels + maxConsonant;
    }
};






