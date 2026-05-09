/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function(arr) {
    let count = 1;
    for(let i = 1; i<arr.length; i++){
        if(arr[i] === arr[i-1]){
            count++;
        }
        if(count > arr.length/4){
            return arr[i];
        }
        if(arr[i] !== arr[i-1]){
            count = 1;
        }
    }
    return arr[0];
};
console.log(findSpecialInteger([1,2,2,6,6,6,6,7,10])) // ans 6