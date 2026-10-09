class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   int first =-1;
   int last = -1;

   int i=0;
   int j = nums.size()-1;
   while(i<=j){
    int mid =  (i+j)/2;
    if(nums[mid]==target){
        j = mid-1;
        first = mid;
    }
   else if(nums[mid]> target){
     j = mid-1;
   }
   else{
    i = mid+1;
   }

   }
  
   i=0;
   j = nums.size()-1;

while(i<=j){
    int mid =  (i+j)/2;
    if(nums[mid]==target){
        i = mid+1;
        last = mid;
    }
   
   else if(nums[mid]> target){
     j = mid-1;
   }
   else{
    i = mid+1;
   }


    }
     return {first,last};
    }
};