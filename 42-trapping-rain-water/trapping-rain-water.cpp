class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);

        left [0] = nums[0];
        for(int i=1;i<n;i++) {
         left[i] = max(nums[i],left[i-1]);
         
        }
        right[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) {
         right[i] = max(nums[i],right[i+1]);
         
        }
        
        
        int sum = 0;
        for(int i=0; i < n ; i++) {
            int h = min(left[i],right[i]) - nums[i];
            sum += h;
        }



        
        return sum;
    }
};