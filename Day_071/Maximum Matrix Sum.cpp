class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int min = 100001;
        int neg_nums = 0;
        for (auto mat: matrix)
        {
            for (long long num: mat)
            {
                if(num<0)
                    neg_nums++;
                num = abs(num);
                if(num < min) {
                    min = num;
                }
                sum += num;
            }
        }
        if(neg_nums%2 ==0)
            return sum;
        sum -= min*2;
        return sum;
    }
};
