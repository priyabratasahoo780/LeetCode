/**
 * @param {string} order
 * @param {string} s
 * @return {string}
 */
var customSortString = function(order, s) {
    let str = "";
    for(let i=0; i<order.length; i++){
        for(let j=0; j<s.length; j++){
            if(order[i] === s[j]){
                str += s[j];
            }
        }

    }
    for(let j=0; j<s.length; j++){
        if(!order.includes(s[j])){
                str += s[j];
            }
    }
    return str;
};
console.log(customSortString("cba", "abcd"));  // ans : "cbad"
