class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        int i = 0;
        while(i < n-1) {
            int a = s[i];
            int b = s[i+1];
            if(abs(a - b ) == 32) {
                s.erase(i,2);
                n-=2;
                if (i > 0) i--; 
            }
            else{
                i++;
            }
        }
        return s;
    }
};