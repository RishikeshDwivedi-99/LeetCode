class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> hash(101);
        int n = nums.size();

        for(int i=0;i<n;i++) {
            hash[nums[i] - 0]++;
        }
        int sum = 0;
        for(int i=0;i<101;i++) {
            if(hash[i] == 1) {
                sum+=i;
            }
        }

        return sum;
    }
};