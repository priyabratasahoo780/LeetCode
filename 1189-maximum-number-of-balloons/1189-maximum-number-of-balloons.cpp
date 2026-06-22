class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int bCount = 0, aCount = 0, lCount = 0, oCount = 0, nCount=0;
        for(char ch : text){
            if(ch == 'b') bCount++;
            if(ch == 'a') aCount++;
            if(ch == 'l') lCount++;
            if(ch == 'o') oCount++;
            if(ch == 'n') nCount++;
        }
        int resultBallon = min({bCount, aCount, nCount, lCount / 2, oCount / 2});
       return resultBallon;
    }
};
