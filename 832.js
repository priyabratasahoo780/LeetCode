/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    let res = [];
    for(let ch of image) {
    let a = ch.reverse().map(x => x === 0 ? 1 : 0);
    res.push(a);
}
    return res;
};
console.log(flipAndInvertImage([[1,1,0],[1,0,1],[0,0,0]]));  // ans: [[100],[101],[111]]