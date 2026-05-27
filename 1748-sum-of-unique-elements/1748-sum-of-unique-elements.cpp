class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int>mp;
       int sum =0;
       for(int n : nums){
        mp[n]++;
       } 
       for(auto n: mp){
        if(n.second==1){
            sum +=n.first;
        }
       }
       return sum;
    }
};