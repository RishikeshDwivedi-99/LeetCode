class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = 0;
        while(start<=end) {
            mid = (start + end) / 2;
            if(nums[mid]==target) return mid;
            else if(nums[mid] > target) end--;
            else start++;
        }
        return -1;
    }
};