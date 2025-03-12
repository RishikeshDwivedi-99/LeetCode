class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int sFreq[26] = {0};
        int tFreq[26] = {0};
        for(int i=0;i<s.length();i++) {
            sFreq[s[i] - 'a']++;
        }
        for(int i=0;i<t.length();i++) {
            tFreq[t[i] - 'a']++;
        }

        for(int i=0;i<26;i++) {
            if(sFreq[i] != tFreq[i]) {
                ans = i+'a';
                break;
            }
        }
        return ans;
    }
};