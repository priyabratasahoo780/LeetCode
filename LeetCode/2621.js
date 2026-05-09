// /**
//  * @param {number} millis
//  * @return {Promise}
//  */
// async function sleep(millis) {
//    let t = Date.now();
//    return new Promise(resolve => {
 
//    })
// // sleep(100).then(() => {
// //   console.log(Date.now() - t); // 100
// // });
// }
// console.log(sleep(100)) // promise { 100 }
// /** 
//  * let t = Date.now()
//  * sleep(100).then(() => console.log(Date.now() - t)) // 100
//  */



/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
   let t = Date.now();
   return new Promise(resolve => {
    setTimeout(() => {
        resolve(Date.now() - t);
    },millis);

   })
}

console.log(sleep(100)) // ans 100
/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */