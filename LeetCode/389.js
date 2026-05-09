/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    let result = 0;
    for(let char of s + t) {
        result ^= char.charCodeAt(0);
    }
    return String.fromCharCode(result);
};
console.log(findTheDifference("a","aa"))


// /**
//  * @param {string} s
//  * @param {string} t
//  * @return {character}
//  */
// var findTheDifference = function(s, t) {
//     for(let j = 0; j < t.length; j++){
//         if(!s.includes(t[j])){
//             return t[j];
//         }
//     }
// };