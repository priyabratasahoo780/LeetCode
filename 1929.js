/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    let res = [];
    for(let i=0; i<nums.length; i++){
        let a = nums[i] + nums[i];
        res.push(a);
    }
    return res;
};
console.log(getConcatenation([1,2,1]));