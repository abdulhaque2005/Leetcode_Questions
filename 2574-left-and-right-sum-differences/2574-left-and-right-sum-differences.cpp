class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      vector<int>leftSum;
      int leftsum=0;
      int rightsum=0;
      vector<int>rightSum;
      vector<int> ans;

      for(int i=0;i<nums.size(); i++){
        leftSum.push_back(leftsum);
        leftsum +=nums[i];
      }
        for(int i=nums.size()-1;i>=0; i--){
        rightSum.push_back(rightsum);
        rightsum +=nums[i];
      }
      reverse(rightSum.begin(),rightSum.end());
    for(int i=0; i<nums.size(); i++){
     ans.push_back(abs(leftSum[i]-rightSum[i]));   
    } 
     return ans;
     }
};