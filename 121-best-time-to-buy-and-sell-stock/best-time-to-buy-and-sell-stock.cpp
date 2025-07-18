class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++) {
            mini = min(mini, v[i]);
            maxi = max(maxi,v[i] - mini);
        }

        return maxi;
    }
};