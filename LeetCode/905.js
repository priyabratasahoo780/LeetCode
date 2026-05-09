/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let res = [];
    for(let i=0; i<nums.length; i++){
        if(nums[i]%2 == 0){
            res.unshift(nums[i]);
        }
        else{
            res.push(nums[i]);
        }
    }
    return res;
};
console.log(sortArrayByParity([3,1,2,4])); // ans: [2,4,3,1];