class Solution {
public:
    bool isPalindrome(int x) {
 if(x<0) return false;
 string n = to_string(x);
 int l=0;
 int r = n.size()-1;
 while(l<r){
    if(n[l]==n[r]){
        l++;
        r--;
    }
    else{
      return  false;
    }
 }    

 return true;
    }
};