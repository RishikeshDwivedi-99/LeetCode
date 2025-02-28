class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> sub;
        unordered_set<char> seen;
        string s = "abcdefghijklmnopqrstuvwxyz";
        int index = 0;

        for(char c: key) {
            if(c!=' ' && seen.find(c) == seen.end()) {
                seen.insert(c);
                sub[c]=s[index++];
            }
        }
        string decode = "";
        for(char c:message) {
            decode+= c==' '? ' ':sub[c];
        }
        return decode;
    }
};