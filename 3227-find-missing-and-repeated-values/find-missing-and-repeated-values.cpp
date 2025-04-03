class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        vector<int> sample(total + 1, 0); 
        vector<int> ans(2, -1); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sample[grid[i][j]]++;
            }
        }
        for (int i = 1; i <= total; i++) {
            if (sample[i] == 2) ans[0] = i; 
            if (sample[i] == 0) ans[1] = i; 
        }

        return ans;
    }
};
