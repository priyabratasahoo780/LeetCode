/**
 * @param {number} n
 * @return {boolean}
 */
var isUgly = function(n){
    let arr = [2,3,5];
    if(n<=0){
        return false;
    }
    for(let num of arr){
    while(n%num===0){
        n=n/num;
    }
    }
    return n==1;
};
console.log(isUgly(6));

