class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = 0;
        int first = -1;
        int last = -1;

        while(start <= end) {
            mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                first = mid;
                mid = end--;
            }
            else if(nums[mid]>target) end--;
            else start++;
        }
        start = 0;
        end = n-1;
        mid = 0; 
        while(start <= end) {
            mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]>target) end--;
            else start++;
        }
       
        return {first, last};
    }
};