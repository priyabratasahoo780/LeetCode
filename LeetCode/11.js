/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let max = height[0];
    let secondMax = height[0];
    for(let i=0; i<height.length; i++){
     if(max<height[i]){
        max = height[i];
     }
    }
    for(let i=0; i<height.length; i++){
     if(height[i]!=max && secondMax<height[i]){
        secondMax = height[i];
     }
    }
    return secondMax*secondMax;
};
console.log(maxArea([1,8,6,2,5,4,8,3,7]))