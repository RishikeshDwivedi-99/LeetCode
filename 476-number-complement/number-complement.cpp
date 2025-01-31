class Solution {
public:
    int findComplement(int num) {
        int rem = 0;
        unsigned int ans = 0;
        unsigned int mul = 1;

        while (num) {
            rem = num % 2;
            rem = rem ^ 1;
            num = num / 2;

            if (mul > INT_MAX / 2) break; 
            
            ans += rem * mul;
            mul *= 2;
        }

        return (int)ans;
    }
};
