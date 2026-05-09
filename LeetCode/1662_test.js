// const MOD = 1000000007;

// function modMul(a, b) {
//   return Number((BigInt(a) * BigInt(b)) % BigInt(MOD));
// }

// function modAdd(a, b) {
//   return Number((BigInt(a) + BigInt(b)) % BigInt(MOD));
// }

// var Fancy = function() {
//     this.vals = [];
//     this.mul = 1;
//     this.addv = 0;
// };

// Fancy.prototype.append = function(val) {
//     this.vals.push((this.mul * val + this.addv) % MOD);
// };

// Fancy.prototype.addAll = function(inc) {
//     this.addv = (this.addv + inc) % MOD;
// };

// Fancy.prototype.multAll = function(m) {
//     this.mul = (this.mul * m) % MOD;
//     this.addv = (this.addv * m) % MOD;
// };

// Fancy.prototype.getIndex = function(idx) {
//     if (idx < 0 || idx >= this.vals.length) return -1;
//     return (this.mul * this.vals[idx] + this.addv) % MOD;
// };

// // Test runner for LeetCode format
// const ops = ["Fancy","append","addAll","append","multAll","getIndex","addAll","append","multAll","getIndex","getIndex","getIndex"];
// const args = [[],[2],[3],[7],[2],[0],[3],[10],[2],[0],[1],[2]];
// let f = null;
// let output = [];
// for(let i = 0; i < ops.length; i++) {
//   const op = ops[i];
//   if (op === 'Fancy') {
//     f = new Fancy();
//     output.push(null);
//   } else if (op === 'append') {
//     f.append(args[i][0]);
//     output.push(null);
//   } else if (op === 'addAll') {
//     f.addAll(args[i][0]);
//     output.push(null);
//   } else if (op === 'multAll') {
//     f.multAll(args[i][0]);
//     output.push(null);
//   } else if (op === 'getIndex') {
//     output.push(f.getIndex(args[i][0]));
//   }
// }
// console.log(output);
