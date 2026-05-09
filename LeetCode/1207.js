/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
    let res = [];
    let count = 0;
    let start = 0;
    let end = arr.length-1;
    while(start<end){
        if(arr[start]===arr[end]){
            count++;
        }
        res.push(count);
    }
    if(count[start]==arr){
        return false;
    }
    return true;
};