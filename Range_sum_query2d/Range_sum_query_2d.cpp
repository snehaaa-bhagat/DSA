class NumMatrix {
private:
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {


        int rows=matrix.size();
        int cols=matrix[0].size();

        for(int i=0;i<rows;i++){
            for(int j=1;j<cols;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int j=0;j<cols;j++){
            for(int i=1;i<rows;i++){
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        prefix=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans;
        ans=prefix[row2][col2];
        if(row1>0){
            ans=ans-prefix[row1-1][col2];
        }
        if(col1>0){
            ans=ans-prefix[row2][col1-1];
        }
        if(col1>0 && row1>0){
            ans=ans+prefix[row1-1][col1-1];
        }
        
    return ans;
    }
};