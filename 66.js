// /**
//  * @param {number[]} digits
//  * @return {number[]}
//  */
// var plusOne = function(digits) {
//     let a = [...digits];
//     let d = a.join('');
//     let f = Number(d) + 1;
//     let m = String(f).split('');
//     return [...m];
// };
// console.log(plusOne([9]));

// // let a = 1234;
// // let m = String(a).split('').join('');
// // console.log(m);


// /**
//  * @param {number[]} digits
//  * @return {number[]}
//  */
// var plusOne = function(digits) {

//     // Start from last digit
//     for (let i = digits.length - 1; i >= 0; i--) {

//         // If digit is less than 9, just increase and return
//         if (digits[i] < 9) {
//             digits[i]++;
//             return digits;
//         }

//         // If digit is 9, make it 0 and continue loop (carry)
//         digits[i] = 0;
//     }

//     // If all digits were 9
//     digits.unshift(1);

//     return digits;
// };
// console.log(plusOne([9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]));






/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
     for(let i = digits.length-1; i>=0; i--){
          if(digits[i]<9){
            digits[i]++;
     return digits;
          }
          digits[i] = 0;
     }
          digits.unshift(1);
     return digits;
};
console.log(plusOne([1,9,9]));