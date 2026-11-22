class Solution {
public:
    bool checkString(string s) {
        int a=s.size();
        for(int i=1;i<a;i++){
            if(s[i-1]=='b'&& s[i]=='a') return false;

        }
        return true;
    }
};