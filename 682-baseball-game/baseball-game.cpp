class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        for(auto s:operations){
            if(s=="C") v.pop_back();
            else if(s=="D") v.push_back(2*v.back());
            else if(s=="+") v.push_back(v.back()+v[v.size()-2]);
            else v.push_back(stoi(s));
        }
        return accumulate(v.begin(),v.end(),0);
    }
};