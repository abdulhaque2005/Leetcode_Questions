class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
     for(int  num : nums){
        mp[num]++;
     }  
     for(auto n :mp){
     if(n.second==2){
        arr.push_back(n.first);
     }   
     } 

     return  arr;
    }
};