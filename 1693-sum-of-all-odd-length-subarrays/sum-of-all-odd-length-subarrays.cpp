class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int length = j - i + 1;

                if (length % 2 == 1) {
                    int subarraySum = 0;

                    for (int k = i; k <= j; ++k) {
                        subarraySum += arr[k];
                    }

                    totalSum += subarraySum;
                }
            }
        }

        return totalSum;
    }
};
