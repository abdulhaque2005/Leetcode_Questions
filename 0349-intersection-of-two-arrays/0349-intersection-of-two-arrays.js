/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let arr =[];
    let res = new Set(nums1)
 for(let i=0; i<nums2.length; i++){  
   if(res.delete(nums2[i]))  
        arr.push(nums2[i])
  }  

return arr;
};