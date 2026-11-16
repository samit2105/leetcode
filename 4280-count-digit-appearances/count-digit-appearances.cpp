class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i:nums){
         int value=i;
         while(value){
            if(value%10==digit) ans++;
            value/=10;
         }
        }
        return ans;
    }
};