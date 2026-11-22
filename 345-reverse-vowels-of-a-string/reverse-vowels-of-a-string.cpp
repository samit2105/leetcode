class Solution {
public:
      bool  isvowel(char c){
           char ch=tolower(c);
           return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
      }
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(!isvowel(s[start])) start++;
            else if(!isvowel(s[end])) end--;
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};