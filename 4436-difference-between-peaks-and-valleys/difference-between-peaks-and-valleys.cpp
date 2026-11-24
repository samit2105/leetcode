class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int ans1=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i + 1]) ans1+=nums[i];
            else if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1])ans1-=nums[i];

        }
        return ans1;
    }
};