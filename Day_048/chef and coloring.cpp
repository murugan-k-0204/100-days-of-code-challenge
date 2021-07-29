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
    string s;
    cin>>s;
    int cR,cG,cB;
    cR = cG = cB = 0;
    for (char c : s)
    {
        if(c=='R') cR++;
        else if(c=='G') cG++;
        else cB++;
    }
    cout<<min(cR+cG,min(cG+cB,cR+cB))<<endl;
}
signed main(){
    fast();
    int t=1; 
    cin>>t;
    while(t--){
        solve();
    }
}

