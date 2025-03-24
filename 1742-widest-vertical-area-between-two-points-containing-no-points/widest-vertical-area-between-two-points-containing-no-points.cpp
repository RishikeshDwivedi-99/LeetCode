class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        int m = points[0].size();
        sort(points.begin(), points.end());

        int maxVal = INT_MIN;
        for(int i=0;i<n-1;i++) {
            maxVal = max(maxVal, points[i+1][0] - points[i][0]);
        }
        return maxVal;
    }
};