class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        int turn = 1;
        
        for (char c : s) {
            int digit = c - '0';
            sum += turn * digit;
            turn *= -1; 
        }
        
        return sum;
    }
};
