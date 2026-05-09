// ans is [2,3] because 2+3=5 and 1+6=7 so the earliest time is 5 
// ans is [1,1]because 1+1=2 and 1+2=3 so the earliest time is 2.
/**
 * @param {number[][]} tasks
 * @return {number}
 */
var earliestTime = function(tasks) {
    let min = tasks[0];
    let sum = Infinity;;
    for(let i=0; i<tasks.length; i++){
      let temp = tasks[i][0]+tasks[i][1];
      if(temp<sum){
        sum = temp;
        min = tasks[i];
      }
    }
    return sum;
};
console.log(earliestTime([[1,6],[1,2]]));
