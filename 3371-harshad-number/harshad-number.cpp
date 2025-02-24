class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sumD = 0;
        int original = x;
        while(x>0) {
            sumD += x%10;
            x = x / 10;
        }
        if(original % sumD == 0) {
            return sumD;
        }
        return -1;
    }
};