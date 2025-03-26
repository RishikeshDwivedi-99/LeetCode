class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> transformations;
        
        for (const string& word : words) {
            string morseWord = "";
            for (char c : word) {
                morseWord += morse[c - 'a'];
            }
            transformations.insert(morseWord);
        }
        
        return transformations.size();
    }
};
