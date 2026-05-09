
class Solution {
public:
    string intToRoman(int num) {
        vector<string> thousands = {"","M","MM","MMM"};
        vector<string> hundreds = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string> tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string> ones = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

        return thousands[num/1000] +
        hundreds[(num%1000)/100] +
        tens[(num%100)/10] +
        ones[num%10];
    }
};

// class Solution {
// public:
//     string intToRoman(int num) {
//         vector<int>arr1 = {
//                         1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1
//     };
//      vector<string>arr2 = {
//             "M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I"  
//      };
//     int i = 0;
//     string r = "";
//     for(int i=0; i<arr1.size(); i++){
//         while(num >= arr1[i]){
//             num -= arr1[i];
//             r += arr2[i];
//         }
        
//     }
//      return r;
//     }
// };
