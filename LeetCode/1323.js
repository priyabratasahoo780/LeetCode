/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
    let res = [];
    let max = -Infinity;
    while(num>0){
        let rem = num%10;
        res.push(rem);
        num = Math.floor(num/10);
    }
    res.reverse();
    for(let i=0; i<res.length; i++){
        if(res[i] === 6){
            res[i] = 9;
            break;
        }
    }
    return Number(res.join(""));
};
console.log(maximum69Number(9669));


// /**
//  * @param {number} num
//  * @return {number}
//  */
// var maximum69Number  = function(num) {
//     return parseInt(String(num).replace('6', '9')) || num;
// };
// console.log(maximum69Number(9669));