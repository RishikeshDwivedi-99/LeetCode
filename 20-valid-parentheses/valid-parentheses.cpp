class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int count = 0;
        string ans = "";
        for(char c : s) {
            if(c=='(' || c=='[' || c=='{') {
                ans+=c;
            }
            else{
                if(ans.empty()) return false;

                char last = ans.back();

                if((c==')' && last!='(') || (c==']' && last!='[') || (c=='}' && last!='{')) {
                    return false;
                }

                ans.pop_back();
            }

        }
        return ans.empty();
    }
};