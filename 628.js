// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var maximumProduct = function(nums) {
//   let h = h.map(x => Math.abs(x));
//     h = nums.sort((a,b) => a - b);
//    if(h[0]===1 && h.length===3){
//      return h[0]*h[1]*h[2];
//    }
//      return h[0]*h[1]*h[2]*h[3];
// };
// console.log(maximumProduct([1,2,3]));
// console.log(maximumProduct([-1,-2,-3]));
// console.log(maximumProduct([1,2,3,4]));




// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var maximumProduct = function(nums) {
//    nums = nums.sort((a,b) => a - b);
//      let n = nums.length; 
//      let p1 = nums[0]*nums[1]*nums[n-1];
//      let p2 = nums[n-1]*nums[n-2]*nums[n-3];
//    return Math.max(p1,p2);
// };
// console.log(maximumProduct([1,2,3]));
// console.log(maximumProduct([-1,-2,-3]));
// console.log(maximumProduct([1,2,3,4]));

// let h = [-1,-2,-3];
// h = h.map(x => Math.abs(x));
// console.log(h[0]*h[1]*h[2]);