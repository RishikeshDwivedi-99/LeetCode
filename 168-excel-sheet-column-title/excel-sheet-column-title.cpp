class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        while (columnNumber > 0) {
            columnNumber--;  
            int remainder = columnNumber % 26;
            ans.push_back(alpha[remainder]);  
            columnNumber /= 26;
        }
        
        reverse(ans.begin(), ans.end());  
        return ans;
    }
};
