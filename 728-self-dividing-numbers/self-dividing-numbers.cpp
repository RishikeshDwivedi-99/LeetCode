class Solution {
public:
    bool isSelfDividing(int num) {
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;  
            if (digit == 0 || num % digit != 0) {
                return false;  
            }
            temp /= 10;  
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i)) {
                v.push_back(i);
            }
        }
        return v;
    }
};
