class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--) {
            if((num[i] -'0') % 2 == 1) {
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};