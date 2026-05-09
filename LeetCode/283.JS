/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
    let j = 0;
    for(let i=0; i<nums.length; i++){
        if(nums !== 0){
       [nums[i],nums[j]] = [nums[j],nums[i]];
       j++;
        }
    }
};
console.log(moveZeroes(1, 0, 2, 0, 3, 2))