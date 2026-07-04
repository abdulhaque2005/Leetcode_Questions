class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int ,int> mp;
       for(int num:nums){
        mp[num]++;
       } 
       for(auto n : mp){
        if(n.second == 1) return n.first;
       }
       return -1;
    }
};