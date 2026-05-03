class Solution {
public:
    int subtractProductAndSum(int n) {
   int subSum=1;
   int addSum =0;
   while(n>0){
    int digit = n%10;
    subSum *= digit;
    addSum +=digit;
     n = n/10;
   }
   return subSum-addSum;


    }
};