class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int n = s.length();
        int n1 = part.length();

        while(n > 0 && s.find(part) < n) {
            s.erase(s.find(part), n1);
        }
        return s;
    }
};