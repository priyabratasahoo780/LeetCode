class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0;
        int curr_depth = 0;
        for(char ch: s){
            if(ch == '('){
                curr_depth++;
            }
            else if(ch == ')'){
                max_depth = max(max_depth,curr_depth);
                curr_depth--;
            }
        }
           return max_depth;
    }
};