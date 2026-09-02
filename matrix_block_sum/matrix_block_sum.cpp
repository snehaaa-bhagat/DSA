class Solution {
private:
    vector<vector<int>> prefix;
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int rows=mat.size();
        int cols=mat[0].size();
        for(int i=0;i<rows;i++){
            for(int j=1;j<cols;j++){
                mat[i][j]+=mat[i][j-1];
            }
        }
        for(int j=0;j<cols;j++){
            for(int i=1;i<rows;i++){
                mat[i][j]+=mat[i-1][j];
            }
        }
        prefix=mat;
        

        vector<vector<int>> ans(rows, vector<int>(cols, 0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){


       
            int row1=max(i-k,0);
            int col1=max(j-k,0);
            int row2=min(i+k,rows-1);
            int col2=min(j+k,cols-1);
            int sum = prefix[row2][col2];

            if (row1 > 0) {
                sum -= prefix[row1 - 1][col2];
            }

            if (col1 > 0) {
                sum -= prefix[row2][col1 - 1];
            }

            if (row1 > 0 && col1 > 0) {
                sum += prefix[row1 - 1][col1 - 1];
            }

            ans[i][j] = sum;
            }
        }
    return ans;   
    }
};