class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        int n = word.length();
        int count = 0;

        for(int i=0;i<n;i++) {
            if(word[i] == ch) {
                count = i;
                break;
            }
        }
        for(int i=0;i<count+1;i++) {
            s.push(word[i]);
        }

        for(int i=0;i<count+1;i++) {
            word[i] = s.top();
            s.pop();
        }

        return word;
    }
};