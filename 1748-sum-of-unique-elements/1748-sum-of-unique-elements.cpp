class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    unordered_map<int,int> mp;
    int sum =0;
    for(int n : nums){
        mp[n]++;
     } 
    for(auto n1 : mp){
    if(n1.second==1){
        sum +=n1.first;
    }
    } 
 return sum;
    }
};