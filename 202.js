/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
   while (n >1) {
    let sum = 0;
    while (n > 0) {
        let m = n%10;
        sum += m*m;
        n = Math.floor(n/10);
    }
    n = sum;  
}
if(n === 1){
    return true;
}

return false;
};
console.log(isHappy(7));