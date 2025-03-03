class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n-1;

        int maxArea = 0;
        int ans = 1;
        while(lp < rp) {
            int wt = rp - lp;
            int ht = min(height[lp], height[rp]);
            ans = ht*wt;
            maxArea = max(maxArea, ans);
            
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxArea;
    }
};