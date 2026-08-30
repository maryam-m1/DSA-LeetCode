class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            // Add primary diagonal element
            sum += mat[i][i];
            
            // Add secondary diagonal element, making sure to skip 
            // the center element if the matrix size is odd (to avoid double counting)
            if (i != n - 1 - i) {
                sum += mat[i][n - 1 - i];
            }
        }

        return sum;
    }
};