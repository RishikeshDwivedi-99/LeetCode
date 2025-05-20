class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for(int i=low;i<=high;i++) {
            string s = to_string(i);
            int n = s.length();

            if(n%2==0) {
                int a = 0;
                int b = 0;
                int temp = n;
                int temp2 = i;
                while(temp) {
                    if(temp > n/2) {
                        a += temp2 % 10;
                        temp2 = temp2 / 10;
                    }
                    else{
                        b += temp2 % 10;
                        temp2 = temp2 / 10;
                    }
                    temp--;
                }
                if(a==b) {
                    count++;
                }
            }

        }
        return count;
    }
};