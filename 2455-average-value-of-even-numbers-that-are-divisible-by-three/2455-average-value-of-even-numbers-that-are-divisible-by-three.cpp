class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                count++;
                sum +=nums[i];
            }
        }
        return (sum >0 && count>0) ? sum/count : sum;
    }
};