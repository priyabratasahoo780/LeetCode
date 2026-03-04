/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    let f1 =0;
    let f2 = 1;
    if(n === 0){
        return 0;
    }
    if(n === 1){
        return 1;
    }
    for(let i=2; i<=n; i++){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }
        return f3;
    
};
console.log(fib(6))


