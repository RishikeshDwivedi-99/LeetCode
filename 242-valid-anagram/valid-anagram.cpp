class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int n1 = t.length();
        int store[26] = {0};

        for(int i=0;i<n;i++) {
            store[s[i]-'a']++;
        }
        int store2[26] = {0};
        for(int i=0;i<n1;i++) {
            store2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++) {
            if(store[i] != store2[i]) {
                return false;
            }
        }
        return true;
    }
};