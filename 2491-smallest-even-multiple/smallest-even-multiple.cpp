class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 0;
        if(n==1)return 2;
        for(int i=1;i<=n*n;i++) {
            if(i % n==0 && i % 2 == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};