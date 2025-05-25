class Solution {
public:
    string interpret(string command) {
        int n = command.length();

        int i = 0;
        string ans = "";
        while(i < n) {
            if(command[i] == 'G') {
                ans += 'G';
            }
            else if(command[i] == '('){
                if(command[i+1] == ')') {
                    ans += 'o';
                }
                else{
                    ans+="al";
                }
            }
            i++;
        }

        return ans;
    }
};