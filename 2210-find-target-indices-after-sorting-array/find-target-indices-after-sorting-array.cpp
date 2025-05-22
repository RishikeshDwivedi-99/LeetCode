class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();

        int num = 0;
        int tcount = 0;

        for(int ele : nums) {
            if(ele < target) {
                num++;
            }
            else if(ele == target){
                tcount++;
            }
        }

        while(tcount>0) {
            ans.push_back(num);
            num++;
            tcount--;
        }
        return ans;
    }
};