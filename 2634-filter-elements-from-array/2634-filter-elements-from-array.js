/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
  let newarr = arr.filter((n,i)=>fn(n,i))
  return newarr;  
};