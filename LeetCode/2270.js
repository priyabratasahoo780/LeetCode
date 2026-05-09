/**
 * @param {number[]} nums
 * @return {number}
 */
var waysToSplitArray = function(nums) {
    let sum = nums.reduce((acc,curr) => acc+curr,0);
    let count = 0;
    let leftSum = 0;
    for(let i=0; i<nums.length-1; i++){
        leftSum += nums[i];
         let rightSum = sum - leftSum;
      if(leftSum >= rightSum){
         count++;
      }
    }
     
      return count;
};
console.log(waysToSplitArray([10,4,-8,7])) // ans 2;