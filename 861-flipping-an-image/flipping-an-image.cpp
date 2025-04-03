class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(auto& num : image) {
            reverse(num.begin(), num.end());
        }
        vector<vector<int>> ans = image;

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(ans[i][j] == 0) {
                    ans[i][j] = 1;
                }
                else{
                    ans[i][j] = 0;
                }
            }
        }
        return ans;
    }
};