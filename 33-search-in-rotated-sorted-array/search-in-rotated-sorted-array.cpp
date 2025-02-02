class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int mid = 0;
        while(st <= end) {
            mid = st + (end - st) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] >= nums[0]) {
                if(nums[mid] >= target && nums[st] <= target) {
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && nums[end] >= target) {
                    st = mid+1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};