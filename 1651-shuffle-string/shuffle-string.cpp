class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string a = "";
        for(int i=0;i<n;i++) {
            int indi;  
            for(int j=0;j<n;j++) {
                if(indices[j]==i) {
                    a+=s[j];
                }
            }
        }
        return a;
    }
};