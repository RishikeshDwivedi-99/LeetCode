class Solution {
public:
    bool isPalindrome(string s) {
        string copy;
        
        for(char c:s) {
            if(isalnum(c)){
                copy+=tolower(c);
            }
        }
        int start = 0;
        int end = copy.size()-1;

        while(start < end) {
            if(copy[start] != copy[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;

    }
};