class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        unordered_set<int> v = {'a','e','i','o','u'};
        for(int i=left; i<=right; i++){
            if(v.count(words[i][0]) && v.count(words[i][words[i].size()-1])){
                count++;
            }
        }
        return count;
    }
};