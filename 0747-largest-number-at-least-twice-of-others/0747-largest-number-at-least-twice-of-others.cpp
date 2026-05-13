class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int largest = INT_MIN;
       int largestIndex=0;
       for(int i=0;i<nums.size(); i++){
        if(nums[i]>largest){
            largest= nums[i];
            largestIndex=i;
        }
       } 
       for(int i=0; i<nums.size(); i++){
        if( i != largestIndex &&largest<2*nums[i]){
            return -1;
        }
       }
       return largestIndex ;
    }
};