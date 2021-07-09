class Solution {
    public:
    int isTriangular(int N){
        int n =(sqrt(1+8*N)-1)/2;
        if(n*(n+1)/2==N) return 1;
        return 0;
    }
};
