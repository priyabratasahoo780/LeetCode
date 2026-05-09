/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    if(Math.abs(z-x)<Math.abs(y-z)){
        return 1;
    }
    else if(Math.abs(z-x) == Math.abs(y-z)){
        return 0;
    }
    return 2;
};
console.log(findClosest(2,7,4));