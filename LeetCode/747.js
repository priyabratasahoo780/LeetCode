/**
 * @param {number[]} nums
 * @return {number}
 */
var dominantIndex = function(nums) {
    let maxVal = -Infinity;
    let maxIndex = -1;
    
    for(let i = 0; i < nums.length; i++) {
        if(nums[i] > maxVal) {
            maxVal = nums[i];
            maxIndex = i;
        }
    }
    
    for(let i = 0; i < nums.length; i++) {
        if(i !== maxIndex && maxVal < nums[i] * 2) {
            return -1;
        }
    }
    
    return maxIndex;
};
console.log(dominantIndex([3,6,1,0]))
console.log(dominantIndex([1,2,3,4]));

