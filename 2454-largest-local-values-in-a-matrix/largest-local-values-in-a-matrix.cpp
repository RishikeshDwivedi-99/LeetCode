class Solution {
public:

int findLocal(vector<vector<int>>& grid, int row , int col) {
    int maxVal = INT_MIN;
    for(int i=row;i<=row+2;i++) {
        for(int j=col;j<=col+2;j++) {
            maxVal = max(maxVal, grid[i][j]);
        }
    }
    return maxVal;
}
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2));
        for(int i=0;i<n-2;i++) {
            for(int j=0;j<n-2;j++) {
                ans[i][j] = findLocal(grid, i,j);
            }
        }
    return ans;
    }
};