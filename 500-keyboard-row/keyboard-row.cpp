class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n = words.size();
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";
        vector<string> ans;
        
        for(string word : words) {
            string row;
            char a = word[0];

            if(r1.find(tolower(a)) != string::npos) row = r1;
            else if(r2.find(tolower(a)) != string::npos) row = r2;
            else if(r3.find(tolower(a)) != string::npos) row = r3;

            bool isValid = true;
            for(char b : word) {
                if(row.find(tolower(b))==string::npos) {
                    isValid = false;
                    break;
                }
            }
            if(isValid == true) ans.push_back(word);
        }
        return ans;
    }
};