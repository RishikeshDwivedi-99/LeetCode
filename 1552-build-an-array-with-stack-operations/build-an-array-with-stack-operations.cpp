class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> num;
        int m = target.size();
        int j = 0;
        for(int i=1;i<=n;i++) {
            ans.push_back("Push");
            num.push(i);
            if(target[j] == num.top()) {
                j++;
                if(j>=m) {
                return ans;
                }
            }else{
                ans.push_back("Pop");
                num.pop();
            }
            
        }
        return ans;
    }
};