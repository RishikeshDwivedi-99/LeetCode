class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        // Prefix XOR
        vector<int> prefixXor(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixXor[i + 1] = prefixXor[i] ^ arr[i];
        }

        // Find all (i, k) where XOR[i to k] == 0
        for (int i = 0; i < n; ++i) {
            for (int k = i + 1; k < n; ++k) {
                if ((prefixXor[k + 1] ^ prefixXor[i]) == 0) {
                    count += (k - i);
                }
            }
        }

        return count;
    }
};
