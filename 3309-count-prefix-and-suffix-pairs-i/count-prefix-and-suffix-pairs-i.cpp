class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        // Iterate over all pairs (i, j) where i < j
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                string a = words[i];
                string b = words[j];
                int n1 = a.length();
                int n2 = b.length();

                // Check if 'a' is both a prefix and a suffix of 'b'
                if (n1 <= n2 && b.substr(0, n1) == a && b.substr(n2 - n1, n1) == a) {
                    count++;
                }
            }
        }

        return count;
    }
};
