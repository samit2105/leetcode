class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
         int cnt=0;
        for(int num:nums){
        
            while(num>0){
              int dig=num%10;
              cnt+=dig;
              num/=10;
            }
        }
        return abs(sum-cnt);
    }
};