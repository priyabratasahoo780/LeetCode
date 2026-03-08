/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word){
    if(word === word.toLowerCase()) return true;
    else if(word === word.toUpperCase()) return true;
    else if(word[0] === word[0].toUpperCase() && word.slice(1) === word.slice(1).toLowerCase()) return true;
    return false;
};
console.log(detectCapitalUse('FLAG'));
console.log(detectCapitalUse('Flag'));
console.log(detectCapitalUse('leetcode'));
console.log(detectCapitalUse('FlaG'));

// let a = 'FLAG';
// let res = [];
// // let c = a.charCodeAt();
// res.push(a);
// // let b = c.split('');
// console.log(res.charCodeAt());