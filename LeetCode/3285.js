/**
 * @param {number[]} height
 * @param {number} threshold
 * @return {number[]}
 */
var stableMountains = function(height, threshold) {
    let res = [];
    for(let i=0; i<height.length; i++){
        if(height[i-1]>threshold){
            res.push(i);
        }
    }
    return res;
};
console.log(stableMountains([1,2,3,4,5],2))