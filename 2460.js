/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function(nums) {
    for(let i=0; i<nums.length; i++){
        if(nums[i] == nums[i + 1]){
            return nums[i]*2;
        }
    }
};
console.log(applyOperations([1,2,2,1,1,0]));