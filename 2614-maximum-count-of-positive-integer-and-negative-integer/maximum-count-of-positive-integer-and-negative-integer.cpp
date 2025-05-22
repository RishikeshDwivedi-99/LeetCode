class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int countNeg = 0;
        int countZero = 0;
        for(int num : nums) {
            if(num < 0) {
                countNeg++;
            }
            else if(num == 0) {
                countZero++;
            }
        }
        int sum = 0;
        sum = countNeg + countZero;

        int countPos = 0;
        countPos = n - sum;


        return max(countPos, countNeg);
    }
};