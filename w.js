/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let k = 0;
    for(let i = 1; i < nums.length; i++){
        if(nums[k] === nums[i]){
            k++;
        }else{
            k--;
        }

        if(k < 0){
            k = i;
        }
    }

    return nums[k];
};
console.log(majorityElement([3,2,3,4,4,4,4,5,5,5,5]));