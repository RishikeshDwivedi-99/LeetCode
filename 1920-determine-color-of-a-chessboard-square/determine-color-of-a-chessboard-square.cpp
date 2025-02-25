class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char column = coordinates[0]; 
        char row = coordinates[1]; 

        string whiteColumns = "aceg"; 
        string whiteRows = "2468"; 

        string blackColumns = "bdfh"; 
        string blackRows = "1357"; 

      
        if ((whiteColumns.find(column) != string::npos && whiteRows.find(row) != string::npos) ||
            (blackColumns.find(column) != string::npos && blackRows.find(row) != string::npos)) {
            return true;
        }
        return false;
    }
};
