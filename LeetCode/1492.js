/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function(n, k) {
    let res = [];
    for(let i=1; i<=n; i++){
        if(n%i===0){
            res.push(i);
        }
    }
    if(k<=res.length){
        return res[k-1];
    }
    return -1;
    
};
console.log(kthFactor(12,3));
console.log(kthFactor(7,2));
console.log(kthFactor(4,4));
