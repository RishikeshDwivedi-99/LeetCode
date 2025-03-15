class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int s1 = strs[0].size();
        int count = 0;
        

        for(int i=0;i<s1;i++) {
            for(int j=1;j<n;j++) {
                if(strs[j][i] < strs[j-1][i]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};