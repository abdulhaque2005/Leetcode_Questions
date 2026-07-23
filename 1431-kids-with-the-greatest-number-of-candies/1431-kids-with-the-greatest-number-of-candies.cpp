class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        int maxCandies =INT_MIN;
          for(int i=0; i<candies.size(); i++){
            if(candies[i]> maxCandies){
                maxCandies=candies[i];
            }
          }
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=maxCandies){
                arr.push_back(true);
            }
            else{
                arr.push_back(false);
            }
        }
        return arr;
    }
};