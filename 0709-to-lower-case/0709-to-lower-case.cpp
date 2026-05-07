class Solution {
public:
    string toLowerCase(string s) {
     string res="";
     for(char  ch : s){
       res += tolower(ch);
     }
    return res;
    }
};