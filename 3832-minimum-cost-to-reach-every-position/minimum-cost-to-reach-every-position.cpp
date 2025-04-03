class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> ans(n);
        int mini = INT_MAX;
        for(int i=0;i<n;i++) {
            mini = min(mini, cost[i]);
            ans[i] = mini;
        }
        return ans;
    }
};