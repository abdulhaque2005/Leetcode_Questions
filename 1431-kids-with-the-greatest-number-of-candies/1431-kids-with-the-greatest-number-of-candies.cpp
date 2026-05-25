class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
   vector<bool> ans;
   int maxCandy = INT_MIN;
   for(int candy : candies){
    maxCandy = max(maxCandy,candy);
   }
   for(int c : candies){
    if(c+extraCandies>=maxCandy){
        ans.push_back(true);
    }
    else{
        ans.push_back(false);
    }
   }
   return ans;
    }
};