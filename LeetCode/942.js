/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
    let max= s.length;
    let count = 0;
    let res = [];
    for(let i = 0; i<s.length; i++){
          if(s[i] == 'I'){
            res.push(count);
            count++;
          }
           else if(s[i] == 'D'){
            res.push(max);
            max--;
          }
    }
    res.push(count);
    return res;
};