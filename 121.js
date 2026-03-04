/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let max = 0;
    let min = prices[0];
    for(let i=0; i<prices.length; i++){
        if(prices[i]<min){
            min = prices[i];
        }
        else if(prices[i]-min>max){
            max = prices[i]-min;
        }
    }
    // for(let i=0; i<prices.length; i++){
    //     if(prices[i]<min){
    //         min = prices[i];
    //     }
    //     return min;
    // }
    // for(let j=0; j<prices.length; j++){
    //     if(prices[i]>max){
    //         max = prices[i];
    //     }
    // }
    // return max-min;
    return max;
};
console.log(maxProfit([7,1,5,3,6,4]));