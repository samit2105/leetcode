class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums11, vector<int>& nums22) {
        set<int>nums1(nums11.begin(),nums11.end());
        set<int>nums2(nums22.begin(),nums22.end());
        vector<int>a,b;
        for(auto i:nums1){
            if(!nums2.count(i)) a.push_back(i);
        
        }
         for(auto i:nums2){
            if(!nums1.count(i)) b.push_back(i);
        
        }

        return {a,b};
    }
};