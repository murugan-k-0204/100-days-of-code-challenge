#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;

#define ll long long 
#define endl "\n"
#define mod 1000000007
//----------Working---Platform-------//

void solve(){
    int n;  cin>>n;
    string s;  cin>>s;
    int total_zero=0,total_one=0;
    for (char c:s)
    {
        if(c=='1') total_one++;
        else total_zero++;
    }
    vector<int> factors;
    for (int i = 1; i <= n; i++)
        if(n%i==0) factors.push_back(i);
    int ans=INT_MAX;
    for (int factor : factors)
    {
        vector<int> one(factor,0),zero(factor,0);
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
                one[i%factor]++;
            else zero[i%factor]++;
        }
        for (int i = 0; i < factor; i++)
            ans = min(ans, zero[i]+total_one-one[i]);
    }
    cout<<ans<<endl;
}

signed main(){
    fast();
    ll t =1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
