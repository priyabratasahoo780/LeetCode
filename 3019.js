/**
 * @param {string} s
 * @return {number}
 */
var countKeyChanges = function(s) {
    let count = 0;
    let a = s.toLowerCase();
    for(let i=0; i<a.length-1; i++){
        if(a[i] != a[i+1]){
            count++;
        }
    }
    return count;
};
console.log(countKeyChanges("aAbBcC"));