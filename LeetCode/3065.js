/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function(nums, k) {
    let count = 0;
    let res = [];
    for(let i=0; i<nums.length; i++){
        if(k>nums[i]){
            count++;
        }
    }
    return count;
};
console.log(minOperations([2,11,10,1,4,3],10))