class Solution {
    public String[] divideString(String s, int k, char fill) {
        int n = s.length();
        int arrSize = n % k == 0 ? n / k : (n / k) + 1;
        String[] arr = new String[arrSize];

        StringBuilder sb = new StringBuilder();
        int newStrSize = (n % k == 0 ? n / k : (n / k) + 1) * k;
        if(newStrSize == n) {
            sb.append(s);
        }
        else {
            int i = 0;
            while(i < newStrSize) {
                if(i < n) {
                    sb.append(s.charAt(i));
                }
                else {
                    sb.append(fill);
                }
                i++;
            }
        }
        s = sb.toString();
        int j = 0;
        for(int i=0;i<arr.length;i++) {
            arr[i] = s.substring(j, j+k);
            j = j+k;
        }
        return arr;
    }
}