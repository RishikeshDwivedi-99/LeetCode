class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = 1;
        sort(nums.begin(), nums.end());
        while(i<j && j<n) {
            if(nums[i]==nums[j]) {
                i+=2;
                j+=2;
            }
            else{
                return false;
            }
        }

        return true;
    }
};