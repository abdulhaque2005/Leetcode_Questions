class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCounter=0;
        int oneCounter=0;
        int twoCounter=0;
   for(int i =0; i<nums.size(); i++){
    if(nums[i]==0){
      zeroCounter++;  
    }
   else if(nums[i]==1){
      oneCounter++;  
    }
    else{
      twoCounter++;  
    }
   }
   int index =0;
   for(int i=0; i<zeroCounter; i++){
     nums[index]=0;
     index++;
   }
      for(int i=0; i<oneCounter; i++){
     nums[index]=1;
     index++;
   }
      for(int i=0; i<twoCounter; i++){
     nums[index]=2;
     index++;
   }
       }
};