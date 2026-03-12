/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let a = nums.sort((a,b) => a - b);
  for(let i=0; i<nums.length; i++){
    for(let j=i+1; j<nums.length; j++){
      for(let k=j+1; k<nums.length; k++){
        if(i===j || i===k || j===k){
          continue;
        }
        if(nums[i]+nums[j]+nums[k]===0){
          return [nums[i],nums[j],nums[k]];
        }
      }
    }
  }
  return [];


 };
console.log(threeSum([-1,0,1,2,-1,-4]));