class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> copy(n);
        vector<int> expected(n);

        copy = heights;
        sort(heights.begin(), heights.end());
        expected = heights;
        int count = 0;
        for(int i=0;i<n;i++) {
            if(copy[i] != expected[i]) {
                count++;
            }
        }
        return count;
    }
};