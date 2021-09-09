
class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> grid(n, vector<int>(n,1));
        vector<vector<int>> left(n, vector<int>(n,0));
        vector<vector<int>> up(n, vector<int>(n,0));
        vector<vector<int>> right(n, vector<int>(n,0));
        vector<vector<int>> down(n, vector<int>(n,0));

        for (auto each: mines)
            grid[each[0]][each[1]] = 0;

        // left 
        for (int i = 0; i < n; i++)
        {
            if(grid[i][0]==1) left[i][0] = 1;
            for (int j = 1; j < n; j++)
                if(grid[i][j]==1) left[i][j] = left[i][j-1] + 1;
        }
        // up
        for (int i = 0; i < n; i++)
        {
            if(grid[0][i]==1) up[0][i] = 1;
            for (int j = 1; j < n; j++)
                if(grid[j][i]==1) up[j][i] = up[j-1][i] + 1;  
        }
        // down
        for (int i = 0; i < n; i++)
        {
            if(grid[n-1][i]==1) down[n-1][i] = 1;
            for (int j = n-2; j >= 0; j--)
                if(grid[j][i]==1) down[j][i] = down[j+1][i] + 1;            
        }
        // right
        for (int i = 0; i < n; i++)
        {
            if(grid[i][n-1]==1) right[i][n-1] = 1;
            for (int j = n-2; j >= 0; j--)
                if(grid[i][j]==1) right[i][j] = right[i][j+1] + 1;
        }
        // construction of main dp -> min of left,right,up,down
        int temp,biggest_plus = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp = min(min(up[i][j],down[i][j]),min(left[i][j],right[i][j]));
                biggest_plus = max(temp,biggest_plus);
            }
        }
        return biggest_plus;
    }
};
