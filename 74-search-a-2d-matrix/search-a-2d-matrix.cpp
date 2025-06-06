class Solution {
public:
bool checkInRow(vector<vector<int>>& mat, int target, int row) {
    int n = mat[0].size();
    int st = 0;
    int ed = n-1;

    while(st <= ed) {
        int mid = st + (ed - st) / 2;

        if(target==mat[row][mid]) {
            return true;
        }
        else if(target > mat[row][mid]) {
            st = mid + 1;
        }
        else {
            ed = mid - 1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int start = 0;
        int end = m-1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(target >= mat[mid][0] && target <= mat[mid][n-1]) {
                return checkInRow(mat, target, mid);
            }
            else if(target>= mat[mid][n-1]) {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
    }
};