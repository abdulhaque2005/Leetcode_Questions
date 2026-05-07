class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
     vector<int> arr;
    for(int i=0; i<words.size(); i++){
      string str = words[i];
      for(char ch: str) {
        if(ch==x){
         arr.push_back(i);
         break;
        }
      } 
    }
     return arr;
    }
};