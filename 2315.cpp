class Solution {
public:
    int countAsterisks(string s) {
        int vbarCount = 0;
        int astericksCount = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '|'){
                vbarCount++;
            }
            if(s[i] == '*' && vbarCount%2==0){
                astericksCount++;
            }
        }
        return astericksCount;
    }
};