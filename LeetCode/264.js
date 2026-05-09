
/**
 * @param {number} n
 * @return {number}
 */
var nthUglyNumber = function(n) {
let dp = new Array(n);
dp[0] = 1;
let i2 = 0, i3 = 0, i5 = 0;

for(let i = 1; i < n; i++){
  let next2 = dp[i2] * 2;
  
  let next3 = dp[i3] * 3;
  let next5 = dp[i5] * 5;
  
  let nextUgly = Math.min(next2, next3, next5);
  dp[i] = nextUgly;
  
  if(nextUgly === next2) i2++;
  if(nextUgly === next3) i3++;
  if(nextUgly === next5) i5++;
}
return dp[n-1];
};
console.log(nthUglyNumber(10));