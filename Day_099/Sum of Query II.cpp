class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        for(int i=1; i<n; i++)
            arr[i] += arr[i-1];
        vector<int> res;
        for(int i=0; i<q*2;i+=2){
            int l = queries[i],r=queries[i+1];
            if(l==1) res.push_back(arr[r-1]);
            else
                res.push_back(arr[r-1] - arr[l-2]);
        }
        return res;
    }
};
