class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for(int i=1;i<=n/2;i++) {
            
            if( n % i == 0) {
                int times = n / i;
                string pattern = s.substr(0,i);
                string newStr = "";
                while(times--){
                    newStr += pattern;
                }
                if(newStr == s) return true;
            }
        }
        
        return false;
    }
};