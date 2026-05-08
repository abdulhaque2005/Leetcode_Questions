class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     vector<int> evenArr;
     vector<int> oddArr;
     for(int num : nums){
        if(num%2==0){
            evenArr.push_back(num);
        }
        else{
         oddArr.push_back(num);
        }
     }
    for(int n :  oddArr){
      evenArr.push_back(n);
    }
    return evenArr;
    }
};