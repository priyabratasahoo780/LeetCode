class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        unordered_set<string>seen;
        for(string word: words){
            string rev = word;
            reverse(rev.begin(), rev.end());
            if(seen.count(rev)){
                count++;
            }
            seen.insert(word);
        }
        return count;
    }
};


