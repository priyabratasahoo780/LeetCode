/**
 * @param {number} left
 * @param {number} right
 * @return {number[]}
 */
var selfDividingNumbers = function(left, right) {
    let res = [];
    for(let num = left; num <= right; num++) {
         let temp = num;
        let isSelfDivding = true;
         while(temp > 0){
            let rem = temp%10;
            if(temp === 0 || num % rem !== 0){
                isSelfDivding = false;
                break;
            }
            temp = Math.floor(temp/10);
         }
         if(isSelfDivding){
            res.push(num);
         }
    }
    return res;
};
console.log(selfDividingNumbers(1,22));

