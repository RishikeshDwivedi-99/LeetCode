class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return 0;

        int a = 1;
        int b = 2;

        if(n==1) return a;
        if(n==2) return b;
        int result = 0;
        for(int i=3;i<=n;i++) {
            result = a + b; 
            a = b;
            b = result;
        }
        return result;
    }
};