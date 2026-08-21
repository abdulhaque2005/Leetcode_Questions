class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum =0;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
          string s = to_string(nums[i]);
          int largest = INT_MIN;
          int small = INT_MAX;
          for(int j=0; j<s.size(); j++){
            int n = s[j]-'0';
            if(n>largest){
             largest = n;   
            }
            if(n<small){
             small = n;
            }
          }  
         mp[i] = (largest-small);
        }

  int max1 = INT_MIN;
  for(auto n : mp){
    if(n.second> max1){
        max1 = n.second;
    }
  }

for(auto n : mp){
    if(n.second== max1){
       sum += nums[n.first]; 
    }
  }










return sum;




    }
};