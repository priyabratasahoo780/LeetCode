class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int max = 0;
        for(int i=0; i<num.size(); i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                     if(num[i] > max){
                        max = num[i];
                        res = string(3,max);
                     }
            }
        }
        return res;
    }
};