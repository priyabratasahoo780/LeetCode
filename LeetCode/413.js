/**
 * @param {number[]} nums
 * @return {number}
 */
var numberOfArithmeticSlices = function(nums) {
    if(nums.length<3) return 0;
    let count = 0;
    let sum = 0;
    for(let i=2; i<nums.length; i++){
        if(nums[i]-nums[i-1] === nums[i-1] - nums[i-2]){
            count++;
            sum += count;
        }
        else{
            count = 0;
        }
    }
    return sum;
};
console.log(numberOfArithmeticSlices([1,2,3,4])); // ans : 3