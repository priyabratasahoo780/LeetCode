/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let a = nums.sort((a,b) => a-b);
    return a;
};
console.log(sortColors([1,0,2])) // ans [0,1,2]