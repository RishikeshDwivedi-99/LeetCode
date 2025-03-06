class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9);  
        string word = "";
        
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue;  
            }
            if (isdigit(s[i])) {
                int pos = s[i] - '0';  
                words[pos - 1] = word; 
                word = "";  
            } else {
                word += s[i];  
            }
        }
        
        
        string ans = "";
        for (const auto& w : words) {
            if (!w.empty()) {  
                if (!ans.empty()) ans += " "; 
                ans += w;
            }
        }
        
        return ans;  
    }
};
