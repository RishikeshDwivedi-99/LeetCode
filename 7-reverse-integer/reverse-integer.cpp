class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int rem = 0;
        while(x!=0) {
            rem = x % 10;
            x = x / 10;
            if(rev > INT_MAX / 10) return 0;
            if(rev < INT_MIN / 10) return 0;
            rev = (rev * 10) + rem;
        }
        return rev;
    }
};