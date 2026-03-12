/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
      for(let j = 0; j < t.length; j++){
        if(!s.includes(t[j])){
            return t[j];
        }
    }
};
console.log(findTheDifference("a","aa"))


