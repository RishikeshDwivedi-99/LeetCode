class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        if (n != goal.length()) {
            return false;
        }

        
        if (s == goal) {
            
            int freq[26] = {0};
            for (int i = 0; i < n; i++) {
                freq[s[i] - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 1) {
                    return true; 
                }
            }
            return false; 
        }

       
        int count = 0;
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] != goal[i]) {
                count++;
                if (count == 1) {
                    idx1 = i;
                } else if (count == 2) {
                    idx2 = i;
                }
            }
        }

        
        if (count == 2) {
            swap(s[idx1], s[idx2]);
            return s == goal; 
        }

        return false; 
    }
};
