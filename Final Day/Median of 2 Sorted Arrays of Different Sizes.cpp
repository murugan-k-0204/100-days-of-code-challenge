class Solution{
    public:
    int helper(vector<int> a, vector<int> b, int m, int n, int k){
        if(m==0) return b[k-1];
        if(n==0) return a[k-1];
        if(k==1) return min(a[0],b[0]);
        int i = min(m, k/2), j = min(n, k/2);
        if(a[i-1]<b[j-1])
            return helper(vector<int> (a.begin()+i,a.end()), b,m-i,n,k-i);
        else
            return helper(a, vector<int> (b.begin()+j,b.end()),m,n-j,k-j);
    }
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int m=array1.size(), n = array2.size();
        int k = (m+n)/2;
        double ans;
        if(m+n & 1) {
            k++;
            ans = helper(array1,array2, m, n, k);
        }
        else{
            double ans1 = helper(array1,array2,m,n,k);
            double ans2 = helper(array1,array2,m,n,k+1);
            ans = ans1 + (ans2-ans1)/2;
        }
        
        return ans;
    }
};
