class Solution {
public:
    bool detectCapitalUse(string word) {
        int countCap =0;
       for(int i=0; i<word.size(); i++){
        if(toupper(word[i])==word[i]){
            countCap++;
        }
       } 
   if(countCap==word.size()) return true;
   if(countCap==0) return true;
   if(word[0]== toupper(word[0])&& countCap ==1) return true;
    
    return false;

    }
};