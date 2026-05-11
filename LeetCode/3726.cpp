// class Solution {
// public:
//     long long removeZeros(long long n) {

//         long long result = 0;

//         string s = to_string(n);

//         for(char ch : s) {

//             if(ch != '0') {
//                 result = result * 10 + (ch - '0');
//             }
//         }

//         return result;
//     }
// };


class Solution {
public:
    long long removeZeros(long long n) {

        long long result = 0;
        long long place = 1;

        while(n > 0) {

            int digit = n % 10;

            if(digit != 0) {
                result = digit * place + result;
                place *= 10;
            }

            n /= 10;
        }

        return result;
    }
};