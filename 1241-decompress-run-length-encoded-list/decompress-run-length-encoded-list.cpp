class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        int p1 = 0, p2 = 1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<nums[p1];j++) {
                arr.push_back(nums[p2]);
            }
            p1+=2;
            p2+=2;
            if(p1>=n) break;
        }
        return arr;
    }
};