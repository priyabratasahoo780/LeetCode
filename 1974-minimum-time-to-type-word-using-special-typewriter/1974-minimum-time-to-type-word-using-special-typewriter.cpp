class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char current = 'a';
        for(char ch: word){
             int diff = abs(ch - current);
             time += min(diff, 26 - diff) + 1;
             current = ch;
        }
             return time;
    }
};

