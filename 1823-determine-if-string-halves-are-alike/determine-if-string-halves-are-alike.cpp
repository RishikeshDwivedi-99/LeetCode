class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int half = n/2;
        int st = 0;
        int end = n-1;
        int countS = 0;
        int countE = 0;
        while(st < n/2 && end >= n/2) {
            if(s[st] == 'a' || s[st] == 'e' || s[st] == 'i' || s[st] == 'o' || s[st] == 'u' || 
            s[st] == 'A' || s[st] == 'E' || s[st] == 'I' || s[st] == 'O' || s[st] == 'U') {
                countS++;
            }
            if(s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || 
            s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U') {
                countE++;
            }
            st++;
            end--;
        }

        if(countS == countE) return true;

        return false;
    }
};