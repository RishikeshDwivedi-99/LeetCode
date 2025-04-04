class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0, count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; ++i) {
            leftSum += nums[i];
            int rightSum = totalSum - leftSum;

            if ((leftSum - rightSum) % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
