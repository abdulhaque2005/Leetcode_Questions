class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
         int max1 = INT_MIN;
        for(int i=lowLimit; i<=highLimit; i++){
            int temp =i;
            int sum =0;
            while(temp>0){
              sum +=  temp%10;
              temp = temp/10;
            }
            mp[sum]++;
            max1 = max(max1, mp[sum]);
        }
        return max1;
    }
};