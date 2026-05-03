class Solution {
public:
    int titleToNumber(string columnTitle) {
         int value=0;
      for(char ch : columnTitle){
        value = (value*26)+(ch - 'A'+1);

      }  
      return value;
    }
};