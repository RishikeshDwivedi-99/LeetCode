class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        
        int left = 0, top = 0, right = n - 1, bottom = n - 1;
        int count = 1;
        
        while (left <= right && top <= bottom) {
            for (int col = left; col <= right; col++) {
                matrix[top][col] = count++;
            }
            top++;
            
            for (int row = top; row <= bottom; row++) {
                matrix[row][right] = count++;
            }
            right--;
            
            if (top <= bottom) {
                for (int col = right; col >= left; col--) {
                    matrix[bottom][col] = count++;
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int row = bottom; row >= top; row--) {
                    matrix[row][left] = count++;
                }
                left++;
            }
        }
        
        return matrix;
    }
};
