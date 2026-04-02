
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
     for(let i = digits.length-1; i>=0; i--){
          let numStr = (digits[i] || 0).toString();
          let base = Math.pow(10, numStr.length);
          if(digits[i] < base - 1){
            digits[i]++;
            return digits;
          }
          digits[i] = 0;
     }
     digits.unshift(1);
     return digits;
};
console.log(plusOne([1,23,11,123,1234,12345,123456,1234567,12345689,12345678901]));