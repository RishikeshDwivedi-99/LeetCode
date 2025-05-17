class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int p1 = 0;
        int p2 = n - 1;
        int maxi = INT_MIN;
        while(p1<p2) {
            int sum = nums[p1] + nums[p2];
            maxi = max(sum, maxi);
            p1++;
            p2--;
        }

        return maxi;
    }
};