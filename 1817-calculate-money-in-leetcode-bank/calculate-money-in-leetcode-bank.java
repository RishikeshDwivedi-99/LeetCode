class Solution {
    public int totalMoney(int n) {
        int i = 0;
        int ans = 0;
        int count = n / 7;
        int n1 = 7;
        while(count > 0) {
            ans += ((n1 * (n1 + 1)) / 2) - ((i*(i+1)) / 2);
            n1++;
            i++;
            count--;
        }
        int a = (n / 7) + 1;
        int count2 = n%7;
        while(count2 > 0) {
            ans+=a;
            a++;
            count2--;
        }
        return ans;
    }
}