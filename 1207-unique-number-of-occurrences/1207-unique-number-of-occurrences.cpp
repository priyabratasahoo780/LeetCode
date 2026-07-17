class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        unordered_set<int>ch;
        for(auto it: freq){
            if(ch.count(it.second)){
                return false;
            }
            ch.insert(it.second);
        }
        return true;
    }
};
