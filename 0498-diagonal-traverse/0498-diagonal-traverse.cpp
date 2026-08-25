class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        int row = mat.size();
        int col = mat[0].size();
        vector<int> result;
        for (int d = 0; d < row + col - 1; d++) {
            if (d % 2 == 0) {
                int r = (d < row) ? d : row - 1;
                int c = d - r;
                while (r >= 0 && c < col) {
                    result.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            } else {
                int c = (d < col) ? d : col - 1;
                int r = d - c;
                while (r < row && c >= 0) {
                    result.push_back(mat[r][c]);
                    r++;
                    c--;
                }
            }
        }
        return result;
    }
};
