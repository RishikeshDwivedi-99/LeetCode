class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int count=0;
        for(int i=0;i<n;i++) {
            bool isConsistent = true;
            for(char c:words[i]){
                if(allowed.find(c)==string::npos){
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent){
                count++;
            }
        }
        return count;
    }
};