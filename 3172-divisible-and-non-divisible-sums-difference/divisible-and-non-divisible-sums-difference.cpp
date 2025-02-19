class Solution {
public:
    int differenceOfSums(int n, int m) {
        int tSum = 0;
        int sum1 = 0;
        int sum2 = 0;
        for(int i=1;i<=n;i++) {
            if(i%m == 0) {
                sum1+=i;
            }
            else{
                sum2+=i;
            }
        }
        tSum = sum2 - sum1;
        return tSum;
    }
};