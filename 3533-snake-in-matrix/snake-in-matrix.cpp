class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int st = 0;  
        int end = 0; 
        
        for (const string& command : commands) {
            if (command == "DOWN") {
                st++;
            } 
            else if (command == "RIGHT") {
                end++;
            } 
            else if (command == "UP") {
                st--;
            } 
            else if (command == "LEFT") {
                end--;
            }

            st = max(0, min(st, n-1));  
            end = max(0, min(end, n-1));  
        }

       
        return st * n + end;
    }
};
