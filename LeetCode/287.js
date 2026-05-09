/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
  let k = 0;
    for(let i=0; i<nums.length; i++){
      for(let j = i + 1; j<nums.length; j++){
        if(nums[i] == nums[j]){
            return nums[i];
        }
      }
    }
    return 0;
};
console.log(findDuplicate([1,3,4,2,2]));