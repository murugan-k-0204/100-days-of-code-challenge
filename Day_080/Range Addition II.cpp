class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mm = m;
        int nn = n;
        for(auto each: ops){
            mm = min(each[0],mm);
            nn = min(each[1],nn);
        }
        return mm*nn;
    }
};
