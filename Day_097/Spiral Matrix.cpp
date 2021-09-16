
class Solution {
public:
    void right(vector<vector<int>> matrix, vector<int>& res, int row, int start,int end){
        for (int i = start; i <= end; i++)
            res.push_back(matrix[row][i]);  
    }
    void left(vector<vector<int>> matrix, vector<int>& res, int row, int start, int end){
        for (int i = start; i >= end; i--)
            res.push_back(matrix[row][i]);
    }
    void down(vector<vector<int>> matrix, vector<int>& res,int col, int start, int end){
        for (int i = start; i <= end; i++)
            res.push_back(matrix[i][col]);
    }
    void up(vector<vector<int>> matrix, vector<int>& res, int col, int start, int end){
        for (int i = start; i >= end; i--)
            res.push_back(matrix[i][col]);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int col_start = 0, col_end = matrix.size()-1,row_start = 0, row_end = matrix[0].size()-1;
        vector<int> result;
        int temp = 0;
        while(col_start<=col_end && row_start<=row_end){
            if(temp==0){
                right(matrix, result, col_start, row_start, row_end);
                col_start++;
            }
            else if(temp ==1){
                down(matrix, result, row_end, col_start, col_end);
                row_end--;
            }
            else if(temp == 2){
                left(matrix, result, col_end, row_end, row_start);
                col_end--;
            }
            else{
                up(matrix, result, row_start, col_end, col_start);
                row_start++;
            }
            temp = (temp+1)%4;
        }
        return result;
    }
};
