class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int n = items.size();
        if(ruleKey[0]=='t') {
            for(int i=0;i<n;i++) {
                if(items[i][0]==ruleValue) {
                    count++;
                }
            }
        }
        else if(ruleKey[0]=='c') {
            for(int i=0;i<n;i++) {
                if(items[i][1]==ruleValue) {
                    count++;
                }
            }
        }
        else if(ruleKey[0]=='n') {
            for(int i=0;i<n;i++) {
                if(items[i][2]==ruleValue) {
                    count++;
                }
            }
        }
        return count;
    }
};