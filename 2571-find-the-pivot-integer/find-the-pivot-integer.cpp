class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        int tSum = (n*(n+1)) / 2;
        if(n==1) return 1;
        for(int i=1;i<=n;i++) {
            sum+=i;
            if(sum == i+(tSum-sum)) {
                return i;
            }
        }
        return -1;
    }
};