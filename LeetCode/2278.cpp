/**
 * @param {string} s
 * @param {character} letter
 * @return {number}
 */
var percentageLetter = function(s, letter) {
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == letter){
            count++;
        }
    }
    int ans = count*100/s.size();
    return ans;
};