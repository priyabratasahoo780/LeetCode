/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function(dividend, divisor) {
    let a = (dividend/divisor);
    let result = Math.round(a);
    return result;
};
console.log(divide(-7,3));