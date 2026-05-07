class Solution {
public:
    int addDigits(int num) {
       int digit  = 1+ (num-1)%9;
       return digit; 
    }
};