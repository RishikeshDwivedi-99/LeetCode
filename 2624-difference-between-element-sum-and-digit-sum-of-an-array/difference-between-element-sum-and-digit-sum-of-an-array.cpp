class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0;i<nums.size();i++) {
            sum1 += nums[i];
        }
        for(int j=0;j<nums.size();j++) {
            if(nums[j]>=10) {
                while(nums[j]>0) {
                    int ld = nums[j] % 10;
                    nums[j] = nums[j] / 10;
                    sum2+=ld;
                }
                
            }else{
                    sum2+=nums[j];
                }
        }
        return sum1 - sum2;
    }
};