/**
 * @param {number} n
 * @return {boolean}
 */
var isThree = function(n) {
    let count = 0;
    for(let i=1; i<=10**4; i++){
        if(n%i==0){
     count++;
    }
    }
    if(count===3){
        return true;
    }
    return false;
};
console.log(isThree(2));
console.log(isThree(4));
console.log(isThree(14));
console.log(isThree(33));
console.log(isThree(13));



