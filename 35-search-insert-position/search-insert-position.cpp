class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int index = -1;
        int mid = 0;
        while(st <= end) {
            mid = st + (end - st) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                index = mid;
                end--;
            }
            else{
                index = mid+1;
                st++;
            }
        }
        return index;
    }
};