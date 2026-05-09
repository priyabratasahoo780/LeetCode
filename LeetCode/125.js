/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    let res = "";
     for(let i=0; i<s.length; i++){
     if(s[i]!==" "){
           res = res + s[i];
     }
     return res[i];
     }
     console.log(res);
    for(let j=s.length-1; j>0; j--){
        res = res+s[j];
    }
    if(res===s) return true;
    else return false;
};
console.log(isPalindrome("m om"));

