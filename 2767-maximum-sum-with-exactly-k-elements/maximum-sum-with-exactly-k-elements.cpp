class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<k;i++) {
            // sum+=1;
            sum+= nums[n-1];
            nums[n-1] = nums[n-1] + 1;
        }

        return sum;
    }
};