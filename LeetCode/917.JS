// /**
//  * @parrrarrm {string} s
//  * @return {string}
//  */
// var reverseOnlyLetters = function(s) {
// let arr = s.split("");
// let left=0;
// let right = arr.length-1;
// while(left<right){
//     // if(!(arr[left]>='a' && arr[left]<='z') || (arr[left]>='A' && arr[left]<='Z')){
//     //     if((arr[right]>='a' && arr[right]<='z') || (arr[right]>='A' && arr[right]<='Z')){
//     //         let temp = arr[left];
//     //         arr[left] = arr[right];
//     //         arr[right] = temp;
//     //         left++;
//     //         right--;
//     //     }
        
//     // }

//     if(!isletter(arr[left])){
//         left++;
//     }
//     else if(!isletter(arr[right])){
//         right--;
//     }
//     else{
//         let temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         left++;
//         right--;
//     }
// }    
// return arr.join("");
// function isletter(ch){
// return ((ch=>'a' && ch<='z') || (ch>='A' && ch<='Z'));
// }
// };
// console.log(reverseOnlyLetters("ab-cd"));   


// // let arr ="arrb-c";
// // console.log(b);

/**
 * @parrrarrm {string} s
 * @return {string}
 */
var reverseOnlyLetters = function(s) {
    let arr = s.split("");
    let left = 0;
    let right = arr.length - 1;

    while (left < right) {

        if (!isletter(arr[left])) {
            left++;
        }
        else if (!isletter(arr[right])) {
            right--;
        }
        else {
            let temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    return arr.join("");

    function isletter(ch) {
        return (
            (ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z')
        );
    }
};

console.log(reverseOnlyLetters("ab-cd")); 