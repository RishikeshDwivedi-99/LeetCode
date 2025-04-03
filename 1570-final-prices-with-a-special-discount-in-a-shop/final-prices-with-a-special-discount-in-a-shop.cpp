class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            int pr = 0;
            for(int j=i+1;j<n;j++) {
                if(nums[i] >= nums[j]) {
                    pr=nums[i] - nums[j];
                    break;
                }
                else{
                    pr = nums[i];
                }
            }
            ans[i] = pr;
        }
        ans[n-1] = nums[n-1];
        return ans;
    }
};