class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left  =0;
        int  sum =0;
        for(int i=0; i<k; i++){
            sum +=nums[i];
        }
        int maxSum=sum;
        for(int i=k; i<nums.size(); i++){
             sum -=nums[left];
             left++;
            sum += nums[i];
          maxSum = max(maxSum,sum);
        }
        return (double)maxSum/k;
    }
};