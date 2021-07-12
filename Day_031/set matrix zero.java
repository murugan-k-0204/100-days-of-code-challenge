class Solution {
    public void setZeroes(int[][] matrix) {
        int m,n;
        m = matrix.length;
        n = matrix[0].length;
        int is_col_zero = 0;
         
        for(int i=0;i<m;i++){
            
            if(matrix[i][0]==0) is_col_zero = 1;
            
            for(int j=1; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        
        for(int i = m-1;i>=0;i--){
            
            for(int j= n-1; j>0; j--){
                
                if(matrix[0][j]==0 || matrix[i][0]==0)
                    matrix[i][j] = 0;
            }
            if(is_col_zero==1) matrix[i][0]=0;
        }
    }
}
