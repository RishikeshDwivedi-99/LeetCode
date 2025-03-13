class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rfreq[26] = {0};
        int mfreq[26] = {0};

        for(int i=0;i<ransomNote.length();i++) {
            rfreq[ransomNote[i] - 'a']++;
        }
        for(int i=0;i<magazine.length();i++) {
            mfreq[magazine[i] - 'a']++;
        }

        for(int i=0;i<ransomNote.length();i++) {
            if(rfreq[ransomNote[i] - 'a'] > mfreq[ransomNote[i] - 'a']) {
                return false;
            }
        }
        return true;
    }
};