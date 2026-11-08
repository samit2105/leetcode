class Solution {
public:
    string interpret(string command) {
        string ans="";
        int s=command.size();
        for(int i=0;i<s;i++){
            if(command[i]=='G') ans+='G';
            else if(command[i]=='(' && command[i+1]==')') ans+='o';
            else if(command[i]=='(') ans+="al";
          
        }
          return ans;
    }
};