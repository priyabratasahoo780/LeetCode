/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let res = 0;
    for(let i=0; i<nums.length; i++){
      let count = 0;
       let num = nums[i];
       while(num>0){
        count++;
        num = num/10;
       }
       if(count%2===0){
        res++;
       }
    }
    return res;
};
console.log(findNumbers([12,345,2,6,7896]));