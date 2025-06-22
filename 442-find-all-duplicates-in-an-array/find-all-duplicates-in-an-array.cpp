class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(*max_element(nums.begin(), nums.end()) + 1, 0);
        vector<int> ans;
        for(int i=0;i<n;i++) {
            hash[nums[i]]++;
        }

        for(int i=0;i<hash.size();i++) {
            if(hash[i] == 2) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};