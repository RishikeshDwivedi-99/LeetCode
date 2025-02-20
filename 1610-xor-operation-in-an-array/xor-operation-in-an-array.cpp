class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            v[i] = start;
            start += 2;
        }
        int xor1 = 0;
        for(int i=0;i<n;i++) {
            xor1 ^= v[i];
        }
        return xor1;
    }
};