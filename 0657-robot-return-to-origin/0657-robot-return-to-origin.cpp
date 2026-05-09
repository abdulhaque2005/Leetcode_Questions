class Solution {
public:
    bool judgeCircle(string moves) {
      int a=0;
      int b=0;
      for(char ch : moves){
        if(ch=='U'){
          a++;
        }
        else if(ch=='D'){
           a--;
        }
        else if(ch=='L'){
            b--;
        }
        else{
            b++;
        }
      }  
      return (a==0 && b==0);
    }
};