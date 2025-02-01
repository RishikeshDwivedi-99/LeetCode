class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = 0;
        int ans = nums[0];
        while(st <= end) {
            mid = st + (end - st) /2 ;
            if(nums[mid] >= nums[0]) {
                st = mid + 1;
            }
            else{
                ans = nums[mid];
                end = mid - 1;
            }
        }
        return ans;
    }
};