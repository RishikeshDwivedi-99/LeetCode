class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            int temp = nums[i];
            int cnt = 0;
            while(temp) {
                temp = temp / 10;
                cnt++;
            }
            if(cnt % 2 == 0) count++;
        }

        return count;
    }
};