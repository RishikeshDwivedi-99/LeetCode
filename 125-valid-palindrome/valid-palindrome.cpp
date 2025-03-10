class Solution {
public:
    bool isPalindrome(string s) {

        string filtered;

        for(char c : s) {
            if(isalnum(c)) {
                filtered.push_back(tolower(c));
            }
        }
        string reversed = filtered;

        reverse(reversed.begin(), reversed.end());

        if(reversed == filtered) return true;

        return false;
    }
};