class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas_tri(numRows);
        for (int i = 0; i < numRows; i++)
        {
            pas_tri[i].resize(i+1);
            pas_tri[i][0]=pas_tri[i][i]=1;
            for (int j = 1; j < i; j++)
            {
                pas_tri[i][j] = pas_tri[i-1][j-1]+pas_tri[i-1][j];
            }
        }
        return pas_tri;
    }
};
