class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // int i=0; int j=nums.size()-1;
        // while(i<=j){
        //     int mid = (i+j)/2;
        //     if(nums[mid]==target){
        //         return true;

        //     }
        //     else if(nums[mid]>target){
        //        j= mid-1;  
        //     }
        //     else{
        //         i = mid+1;
        //     }
        // }


for(int i=0; i<nums.size(); i++){
    if(nums[i]==target){
        return true;
    }
}


        return false;

    }
};