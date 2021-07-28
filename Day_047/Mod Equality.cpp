#include<bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl;
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    // cout<<"[ ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"]"<<endl;
    
    int last = arr[0];
    int i;
    for (i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1])
            break;
        last = arr[i];
        if(i==n-2){
            cout<<0<<endl;
            return;
        }
    }


    
    if(arr[i]*2 < arr[i+1])
        cout<<n-i-1<<endl;
    else
        cout<<n<<endl;
    
}

signed main(){
    fast();
    int t; cin>>t;
    while(t--){
        solve();
    }
}

