class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int countC = 0;
        int countS = 0;
        for(int i=0;i<n;i++) {
            int a = word[i];
            if(a>64 && a<91) {
                countC++;
            }
            else{
                countS++;
            }
        }
        if(countC == n || countS==n) return true;
        else if(countC == 1) {
            int a = word[0];
            if(a>64 && a<91) {
                return true;
            }
        }
        return false;
    }
};