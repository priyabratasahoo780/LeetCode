/**
 * @param {number[]} nums
 * @return {string}
 */
var triangleType = function(nums) {
    if(nums[0]+nums[1]>nums[2] || nums[0]+nums[2]>nums[1] || nums[1]+nums[2]>nums[0]){
        if(nums[0] === nums[1] && nums[1] === nums[2]){
            return "equilateral";
        }
        else if(nums[0] === nums[1] || nums[1] == nums[2] || nums[0] == nums[2]){
            return "isosceles";
        }
        else if((nums[1] === nums[0]+1) && (nums[2] === nums[0] + 2)){
    return "scalene";
        }
    }
    return "none";
};
console.log(triangleType[3,3,3]);