/**
 * @param {string} s
 * @param {number} k
 * @param {character} fill
 * @return {string[]}
 */
var divideString = function(s, k, fill) {
    let str = "";
    let res = [];
    for(let i=0; i<s.length; i++){
        str += s[i];
        if(str.length === k){
            res.push(str);
        }
        str = "";
    }
    if(str.length !== 0){
        while(str.length < k){
            str += fill;
        }
        res.push(str);
    }
return res;
};
console.log(divideString("abcdefghi", 3,"x")); // ans: ["abc","def","ghi"]