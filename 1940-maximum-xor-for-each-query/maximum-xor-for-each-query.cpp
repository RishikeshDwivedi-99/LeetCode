class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxVal = (1 << maximumBit) - 1;  // 2^maximumBit - 1
        int xorSum = 0;
        vector<int> result;

        for (int num : nums) {
            xorSum ^= num;
        }

        for (int i = nums.size() - 1; i >= 0; --i) {
            result.push_back(xorSum ^ maxVal);  // Choose k to maximize XOR result
            xorSum ^= nums[i];  // Remove last element
        }

        return result;
    }
};
