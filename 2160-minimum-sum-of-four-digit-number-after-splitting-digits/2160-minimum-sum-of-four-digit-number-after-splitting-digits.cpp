class Solution {
public:
    int minimumSum(int num) {
         int d[4];
        d[0] = num % 10;
        d[1] = (num / 10) % 10;
        d[2] = (num / 100) % 10;
        d[3] = num / 1000;
        
        sort(d, d + 4);
        
        return (d[0] + d[1]) * 10 + d[2] + d[3];
    }
};

