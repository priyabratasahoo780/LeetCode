/**
 * @param {number[]} nums
 * @return {number}
 */
var averageValue = function(nums) {
    let sum = 0;
    let count = 0;
    for(let i=0; i<nums.length; i++){
        if(nums[i]%3==0 && nums[i]%2==0){
            sum += nums[i];
            count++;
        }
        }
        return count > 0 ? Math.floor(sum/count): 0;
};
console.log(averageValue([1,2,4,7,10,12,6,18]));