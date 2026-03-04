/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let product = 1;
    let sum = 0;
    let result = 0;
    while(n>0){
        let r = n%10;
     product *= r;
     sum += r;
     n = Math.floor(n/10);
     result = product - sum;
    }
    return result;
};
console.log(subtractProductAndSum(234))