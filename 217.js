/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
   for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] === nums[j]) {
                return true;
            }
        }
    }
    return false;
};
console.log(containsDuplicate([1,2,3,22,22]));



// var containsDuplicate = function(nums) {
    

// console.log(containsDuplicate([1,2,3,1]));

// let a = 10;
// console.log(a);