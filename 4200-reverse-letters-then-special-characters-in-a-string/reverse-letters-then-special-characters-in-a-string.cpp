class Solution {
public:
    string reverseByType(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }
        int a=0;
        int b=s.size()-1;
         while(a < b) {
            if(!islower(s[a]) && !islower(s[b])) {
                swap(s[a++], s[b--]);
            }
            else if(islower(s[a])) {
                a++;
            }
            else {
                b--;
            }
         }
        

        return s;
    }
};