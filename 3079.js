let a = [11,12,13];
let result = [];
let sum = 0;
for(let i = 0; i < a.length; i++) {
    let num = a[i];
    // digit = [1,1];
    let digits = [];
    // i = 11>0 yes;
    while (num > 0) {
        // 11%10 == 1;
        //1%10 = 1;
        let r = num % 10;
        digits.push(r);
        // 11/10 = 1;
        // 1/10 = 0;
        num = Math.floor(num / 10);
    }
    // max = 1;
    let maxDigit = Math.max(...digits);
    // length = 2;
    let len = digits.length;

    let newNum = parseInt(String(maxDigit).repeat(len)); 
    result.push(newNum);
    sum += newNum;
}
console.log(sum); // 66

