/**
 * @param {number[]} nums
 * @return {number}
 */
var findNonMinOrMax = function(nums) {
   if(nums.length < 3) return -1;
   let max = Math.max(...nums);
   let min = Math.min(...nums);
   for(let i=0; i<nums.length; i++){
    if(nums[i]!= max && nums[i]!= min){
        return nums[i];
    }
   }
}
console.log(findNonMinOrMax([3,2,1])); // ans = 2;
console.log(findNonMinOrMax([1,2])); // ans = -1;
console.log(findNonMinOrMax([3,30,24])); // ans = 24;
