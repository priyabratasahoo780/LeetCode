/**
 * @param {number} n
 * @return {number}
 */
var bitwiseComplement = function(n) {
   let w = n.toString(2).split(''); 
let t;
for(let i=0; i<w.length; i++){
    if(w[i]==='0'){
        w[i] = 1;
    }
    else{
        w[i] = 0;
    }
}
 t = w;
let num = parseInt(t.join(""), 2);
return num;
};
console.log(bitwiseComplement(5));



