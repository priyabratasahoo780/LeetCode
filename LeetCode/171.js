/**
 * @param {string} columnTitle
 * @return {number}
 */
var titleToNumber = function(columnTitle) {
    let sum = 0; 
    let t = columnTitle.length-1;
    for(let i=0; i<columnTitle.length; i++){
        sum += (columnTitle.charCodeAt(i)-64)*(26**t);
        t--;
    }
    return sum;
};
console.log(titleToNumber("A"));