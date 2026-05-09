/**
 * @param {number} n
 * @return {boolean}
 */
var checkDivisibility = function(n) {
    let sum = 0;
    let product = 1;
    n = Math.abs(n);
    let total;
    let original = n;
    while(n>0){
        let digit = n%10;
        sum += digit;
        product *= digit;
        n = Math.floor(n/10);
    }
   total = sum + product;
   return original%total === 0;

};
console.log(checkDivisibility(10));