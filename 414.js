/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
   let  a = nums.sort((a,b) => b-a);
   let res = new Set(nums);
let arr = [...res];
    return arr.length < 3 ? Math.max(...arr) : arr[2];
};
console.log(thirdMax([1,2,3])) // ans 1;
console.log(thirdMax([1,2])) // ans 2;
console.log(thirdMax([2,2,3,1])) // ans 1;
console.log(thirdMax([3,3,4,3,4,3,0,3,3]))  // ans 0;