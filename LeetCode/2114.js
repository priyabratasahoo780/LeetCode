/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
 let max = 0;
 let res = [];
 for(let i=0; i<sentences.length; i++){
    let words = sentences[i].split(" ");
    res.push(words.length);
 }
 for(let i=0; i<res.length; i++){
    if(max<res[i]){
        max = res[i];
    }
 }
 return max;
};
console.log(mostWordsFound(["alice and bob love leetcode", "i think so too", "this is great thanks very much"]));



// /**
//  * @param {string[]} sentences
//  * @return {number}
//  */
// var mostWordsFound = function(sentences) {
//     let res = [];
//     let max = -Infinity; 
//     for(let i=0;i<sentences.length;i++){
//         let wordsArr = sentences[i].split(" ");
//         res.push(wordsArr.length);
//     }
//     for(let i=0;i<res.length;i++){
//         if(res[i] > max){
//             max = res[i];
//         }
//     }
//     return max;
// };
// console.log(mostWordsFound(["alice and bob love leetcode", "i think so too", "this is great thanks very much"]));
