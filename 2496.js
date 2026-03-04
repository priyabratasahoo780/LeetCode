/**
 * @param {string[]} strs
 * @return {number}
 */
var maximumValue = function(strs) {
    let max = 0;
    for(let i=0; i<strs.length; i++){
   if(isNaN(strs[i])){
    if(strs[i].length > max ){
        max = strs[i].length
    }
}else{
    if(Number(strs[i]) > max){
        max = Number(strs[i])
    }
}
}
return max;
};
console.log(maximumValue(["alic3","bob","3","4","00000"]));  // ans: 5
console.log(maximumValue(["1","01","001","0001"]));  // ans: 1





// /**
//  * @param {string[]} strs
//  * @return {number}
//  */
// var maximumValue = function(strs) {
//     let max = 0;
//     for(let i=0;i<strs.length;i++){
//         if(isNaN(strs[i])){
//             if(max<strs[i].length){
//                 max = strs[i].length
//             }
//         }else{
//             if(max<Number(strs[i])){
//                 max = Number(strs[i])
//             }
//         }
//     }
//     return max;
// };
// console.log(maximumValue(["alic3","bob","3","4","00000"]));  // ans: 5
// console.log(maximumValue(["1","01","001","0001"]));  // ans: 1
