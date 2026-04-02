// // /**
// //  * @param {number[]} digits
// //  * @return {number[]}
// //  */
// // var plusOne = function(digits) {
// //     let a = [...digits];
// //     let d = a.join('');
// //     let f = Number(d) + 1;
// //     let m = String(f).split('');
// //     return [...m];
// // };
// // console.log(plusOne([9]));

// // // let a = 1234;
// // // let m = String(a).split('').join('');
// // // console.log(m);


// // /**
// //  * @param {number[]} digits
// //  * @return {number[]}
// //  */
// // var plusOne = function(digits) {

// //     // Start from last digit
// //     for (let i = digits.length - 1; i >= 0; i--) {

// //         // If digit is less than 9, just increase and return
// //         if (digits[i] < 9) {
// //             digits[i]++;
// //             return digits;
// //         }

// //         // If digit is 9, make it 0 and continue loop (carry)
// //         digits[i] = 0;
// //     }

// //     // If all digits were 9
// //     digits.unshift(1);

// //     return digits;
// // };
// // console.log(plusOne([9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]));






// /**
//  * @param {number[]} digits
//  * @return {number[]}
//  */
// var plusOne = function(digits) {
//      for(let i = digits.length-1; i>=0; i--){
//           if(digits[i]<9){
//             digits[i]++;
//      return digits;
//           }
//           digits[i] = 0;
//      }
//           digits.unshift(1);
//      return digits;
// };
// console.log(plusOne([1,9,9]));

// // /**
// //  * @param {number[]} digits
// //  * @return {number[]}
// //  */
// // var plusOne = function(digits) {
// //     let a = [...digits];
// //     let d = a.join('');
// //     let f = Number(d) + 1;
// //     let m = String(f).split('');
// //     return [...m];
// // };
// // console.log(plusOne([9]));

// // // let a = 1234;
// // // let m = String(a).split('').join('');
// // // console.log(m);


// // /**
// //  * @param {number[]} digits
// //  * @return {number[]}
// //  */
// // var plusOne = function(digits) {

// //     // Start from last digit
// //     for (let i = digits.length - 1; i >= 0; i--) {

// //         // If digit is less than 9, just increase and return
// //         if (digits[i] < 9) {
// //             digits[i]++;
// //             return digits;
// //         }

// //         // If digit is 9, make it 0 and continue loop (carry)
// //         digits[i] = 0;
// //     }

// //     // If all digits were 9
// //     digits.unshift(1);

// //     return digits;
// // };
// // console.log(plusOne([9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]));






// /**
//  * @param {number[]} digits
//  * @return {number[]}
//  */
// var plusOne = function(digits) {
//      for(let i = digits.length-1; i>=0; i--){
//           if(digits[i]<9){
//             digits[i]++;
//      return digits;
//           }
//           digits[i] = 0;
//      }
//           digits.unshift(1);
//      return digits;
// };
// console.log(plusOne([1,9,9]));



// #include <iostream>
// #include <vector>
// using namespace std;

// int maxProfit(vector<int>& prices) {
//     int minPrice = prices[0];
//     int maxProfit = 0;

//     for(int i = 1; i < prices.size(); i++) {
//         if(prices[i] < minPrice) {
//             minPrice = prices[i];
//         } else {
//             int profit = prices[i] - minPrice;
//             if(profit > maxProfit) {
//                 maxProfit = profit;
//             }
//         }
//     }

//     return maxProfit;
// }

// int main() {
//     vector<int> prices = {7,1,5,3,6,4};

//     cout << maxProfit(prices);
// }


#include <iostream>
#include <vector>
#include <algorithm> // for sort, unique
using namespace std;

int main() {
    vector<int> vec = {4, 2, 5, 2, 3, 4, 1, 5};

    // Step 1: Sort the vector
    sort(vec.begin(), vec.end());

    // Step 2: Use unique() to move duplicates to the end
    auto last = unique(vec.begin(), vec.end());

    // Step 3: Erase the duplicates
    vec.erase(last, vec.end());

    // Output the result
    cout << "Unique elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
