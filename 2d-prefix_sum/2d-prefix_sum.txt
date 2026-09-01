#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> PrefixSum(vector<vector<int>> matrix) {
    int rows=matrix.size();
    int col=matrix[0].size();

    for(int i=0;i<rows;i++){
        for(int j=1;j<col;j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }

    for(int j=0;j<col;j++){
        for(int i=1;i<rows;i++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    return matrix;
}

int main(){

    vector<vector<int>> matrix = {
        {1,3,5,7},
        {4,6,2,9},
        {5,8,7,6}
    };

    auto prefix =PrefixSum(matrix);

    for (const auto& row : prefix) {
        for (int val : row) cout << val << " ";
        cout << "\n";
    }
}