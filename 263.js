// /**
//  * @param {number} n
//  * @return {boolean}
//  */
// var isUgly = function(n){
//     let arr = [2,3,5];
//     if(n<=0){
//         return false;
//     }
//     for(let num of arr){
//     while(n%num===0){
//         n=n/num;
//     }
//     }
//     return n==1;
// };
// console.log(isUgly(6));


/**
 * @param {number} n
 * @return {number}
 */
var nthUglyNumber = function(n) {
    let arr = [2,3,5];
    let res = [];
    for(let i=0; i<1690; i++){
    if(n<=0) return 0;
      else{
         for(let num of arr){
    while(i%num===0){
        i=i/num;
    }
    }
      }
    }
    for(let a=1; a<=n; i++){
        res +=a;
    }
    return res[res.length];
};
console.log(nthUglyNumber(10));