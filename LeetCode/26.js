// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

/**
//  * @param {number[]} nums
//  * @return {number}
//  */
var removeDuplicates = function(nums) {
    let k = 1;
    for(let i=1; i<nums.length; i++){
        if(nums[i] !== nums[k-1]){
        nums[k] = nums[i];
            k++;
        }
    }
    return k;

};
console.log(removeDuplicates([1,2,3,4]))

// function check(nums){
//       let count = 0;
//     for(let i=0; i<nums.length; i++){
//         for(let j=0; j<nums.length; j++){
//          if(nums[i] === nums[j]){
//      continue;
//          }
//          else{
//             count++;
//          }
//          console.log(count);
//         }
//     }
//     return nums;
// }
// console.log(check[0,1,1,1,2,3,4,5,6]);


// function check(num){
//     //   if(num.length === 0){
//     //     return 0;
//     // }
//     let count = 1;
//    for(let i=1; i<num.length; i++){
//          if(num[i] !== num[i-1]){
//          count++;
//          }
//     }
//     return count;
//    }
// console.log(check([1,2,3,4,5,6]));
// console.log(check([]));  


// function check(num){
//     let t = [...num];
//     let a = t.sort((a, b) => a - b);
//     for(let i=1; i<a.length; i++){
//         if(a[i] === a[i-1]){
//             return true;
//         }
//     }
//     return false;
// }
// console.log(check([1,2,3,4,5,3]));