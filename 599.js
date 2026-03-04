/**
 * @param {string[]} list1
 * @param {string[]} list2
 * @return {string[]}
 */
var findRestaurant = function(list1, list2) {
    let sum = 0;
    let min = Number.MAX_VALUE;
    for(let i=0; i<list1.length; i++){
        for(let j=0; j<list2.length; j++){
           if(list1[i] == list2[j]){
            sum = i+ j;
            if(sum < min){
                min = sum;
            }
           }
        }
    }
    return list1.filter((item,index) => list2.includes(item) && index + list2.indexOf(item) == min);
};
console.log(findRestaurant(["happy","sad","good"], ["sad","happy","good"]));