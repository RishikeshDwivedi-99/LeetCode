class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26);
        for(char ch : s) {
            freq[ch-'a']++;
        }
        int maxVowels = INT_MIN;
        int maxConsonants = INT_MIN;
        for(int i=0;i<26;i++) {
            if(i==0 || i==4 || i==8 || i==14 || i==20) {
                maxVowels = max(freq[i], maxVowels);
            }
            else {
                maxConsonants = max(freq[i], maxConsonants);
            }
        }

        return maxVowels + maxConsonants;
    }
};