class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int p1 = 0;
        int p2 = 1;
        while(p2 < n) {
            swap(nums[p1], nums[p2]);
            p1+=2;
            p2+=2;
        }
        return nums;
    }
};