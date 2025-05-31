class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> hash(101, 0);

        int n = nums.size();

        for(int i=0;i<n;i++) {
            hash[nums[i] - 0]++;
        }
        int maxi = INT_MIN;
        for(int i=0;i<101;i++) {
            maxi = max(maxi, hash[i]);
        }
        int sum = 0;
        for(int i=0;i<101;i++) {
            if(hash[i]==maxi) {
                sum+=hash[i];
            }
        } 

        return sum;
    }
};