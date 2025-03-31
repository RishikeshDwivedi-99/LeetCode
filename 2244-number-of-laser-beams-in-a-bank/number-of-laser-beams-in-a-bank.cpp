class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int ans = 0;
        int count1 = 0;  
        
        for (int i = 0; i < n; i++) {
            int count2 = 0;  
            
            for (char a : bank[i]) {
                if (a == '1') {
                    count2++;
                }
            }
            
            if (count1 != 0 && count2 != 0) {  
                ans += count1 * count2;
            }
            
            if (count2 != 0) { 
                count1 = count2;
            }
        }
        return ans;
    }
};
