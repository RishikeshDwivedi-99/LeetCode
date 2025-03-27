class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
                string a = words[i];
                reverse(a.begin(), a.end());
                if(i!=j && a==words[j]) {
                    count++;
                }
            }
        }
        return count / 2;
    }
};