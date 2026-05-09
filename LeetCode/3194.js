/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function(nums) {
 let minAvg = Infinity ;
    while(nums.length>0){
    let minElement = Math.min(...nums);
    let maxElement = Math.max(...nums);
    let avg = (minElement + maxElement)/2;
    if(avg < minAvg){
        minAvg = avg;
    }
    nums.splice(nums.indexOf(minElement),1);
    nums.splice(nums.indexOf(maxElement),1);
    }
    return minAvg;
};
console.log(minimumAverage( [7,8,3,4,15,13,4,1]));  