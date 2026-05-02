class Solution {
public:
    int averageValue(vector<int>& nums) {
     int count =0; 
     int sum =0;
     int avg=0;
     for(int num : nums){
    if(num%2==0 && num%3==0){
        count++;
        sum +=num;
    }
     }   
     if(count ==0)return 0;
     return sum/count;
    }
};