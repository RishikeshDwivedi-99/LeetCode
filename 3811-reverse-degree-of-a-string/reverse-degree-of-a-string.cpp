class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int n = s.length();

        for(int i=0;i<n;i++) {
            int temp = ('z' - s[i]) + 1;
            ans += (i+1) * temp;
        }

        return ans;
    }
};