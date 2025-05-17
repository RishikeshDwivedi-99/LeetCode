class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> cnt;
        for(int i=0;i<n;i++) {
            int rev = 0;
            cnt[nums[i]]++;
            int temp = nums[i];
            while(temp > 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            cnt[rev]++;
        }
        int count = 0;
        for(auto nu : cnt) {
            if(nu.second >= 1) {
                count++;
            }
        }

        return count;


    }
};