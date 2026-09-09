class Solution {
public:
    long long countCommas(long long n) {
        // if(n > 999 && n<10000) return n - 999;
        // else if(n > 9999 && n<100000) return n - 9999;
        // else if(n > 99999 && n<1000000) return n - 99999;
        // else if(n > 999999 && n<1000000) return n - 999999;
        // else if(n > 9999999 && n<10000000) return n - 9999999;
        // else if(n > 99999999 && n<1000000000) return n - 99999999;
        // else if(n > 999999999 && n<1000000000) return n - 999999999;
        // else if(n < 1000000) return n - 999999;

        // return 0;

        long long totalCommas = 0;
        long long bases = 1000;

        while (n >= bases) {
            totalCommas += (n - bases + 1);
            bases *= 1000;
        }
        return totalCommas;
    }
};

