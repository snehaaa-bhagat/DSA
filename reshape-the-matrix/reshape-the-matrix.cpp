class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n != r*c){
            return mat;
        }
        vector<vector<int>> result(r, vector<int>(c));
        for(int i=0;i<m*n;i++){
            int old_row= i/n;
            int old_col= i%n;

            int new_row= i/c;
            int new_col= i%c;

            result[new_row][new_col] = mat[old_row][old_col];
        }
        return result;
        
    }
};