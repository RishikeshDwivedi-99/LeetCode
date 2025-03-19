class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int temp = i;
            while (temp > 0) {
                count += temp % 2;
                temp = temp / 2;
            }
            
            if (count == k) {
                result += nums[i];
            }
        }
        
        return result;
    }
};
