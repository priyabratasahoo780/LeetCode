class Solution {
public:
    int factorial(int d) {
        int fact = 1;
        for (int i = 1; i <= d; i++)
            fact *= i;
        return fact;
    }

    bool isDigitorialPermutation(int n) {
        int original = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += factorial(digit);
            n /= 10;
        }

        string a = to_string(original);
        string b = to_string(sum);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};