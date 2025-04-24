class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int n = operations.size();
        for(int i = 0;i < n;i++) {
            if(operations[i] == "C") {
                if(!ans.empty()) ans.pop_back();
            }
            else if(operations[i] == "D"){
                if(!ans.empty()) ans.push_back(2 * ans.back());
            }
            else if(operations[i] == "+") {
                int size = ans.size();
                if(size >= 2) {
                    ans.push_back(ans[size-1] + ans[size-2]);
                }
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int score : ans) {
            sum+=score;
        }
        return sum;
    }
};