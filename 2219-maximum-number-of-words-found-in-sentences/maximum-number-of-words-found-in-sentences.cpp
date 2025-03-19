class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int maxi = -1;
        for(int i=0;i<n;i++) {
            int count = 1;
            for(char c : s[i]) {
                if(c == ' ') {
                    count++;
                }
            }
            maxi = max(count, maxi);
        }
    return maxi;
    }
};