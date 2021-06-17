class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int rows=m,cols=n;
        for(auto inc: ops){
            rows=min(rows,inc[0]);
            cols=min(cols,inc[1]);
        }
        return rows*cols;
    }
}; 
