class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = n-1;
        double mini = INT_MAX;
        for(int i=0;i<=n/2;i++) {
            double c = (nums[st] + nums[end])/2.0;
            mini = min(c, mini);
            st++;
            end--;
        }
        return mini;
    }
};