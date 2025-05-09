class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                string a = words[i];
                string b = words[j];
                int n1 = a.length();
                int n2 = b.length();

                if (n1 <= n2 && b.substr(0, n1) == a && b.substr(n2 - n1, n1) == a) {
                    count++;
                }
            }
        }

        return count;
    }
};
