class Solution {
public:
    int countDigits(int num) {
        int num1 = num;
        int lastDigit;
        int count = 0;
        while(num>0) {
            lastDigit = num % 10;
            num = num / 10;
            if(num1 % lastDigit == 0) {
                count++;
            }
        }
        return count;
    }
};