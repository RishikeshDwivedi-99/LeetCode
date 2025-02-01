class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<=end) {
            mid = end + (st-end) / 2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
                return mid;
            }
            else if(nums[mid] > nums[mid-1]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return mid;
    }
};