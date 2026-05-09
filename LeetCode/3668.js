/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    let res=[];
    for(let i=0; i<order.length; i++){
        for(let j=0; j<friends.length; j++){
            if(order[i] == friends[j]){
                res.push(order[i]);
            }
        }
    }
    return res;
};
console.log(recoverOrder([3,1,2,5,4],[1,3,4])) // ans: [3,1,4]