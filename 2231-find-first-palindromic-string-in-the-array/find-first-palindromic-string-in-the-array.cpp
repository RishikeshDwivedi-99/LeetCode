class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for(int i=0;i<n;i++) {
            string a = words[i];
            reverse(words[i].begin(), words[i].end());
            string b = words[i];
            if(a==b) {
                return b;
            }
        }
        return "";
    }
};