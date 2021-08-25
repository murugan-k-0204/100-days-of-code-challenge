#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
    int n,k,k_val;
    cin >> n >> k >> k_val ;
    
    vector<int> elements(n);
    for (int i = 0; i < n; i++) cin >> elements[i];
    sort(all(elements), greater<int>());

    ll ans = 0;
    int i;
    for (i = 0; i < k*2; i+=2)
        ans += min(k_val, elements[i]+elements[i+1]);
    for (int j = i; j < n; j++)
        ans+= elements[j];
    cout << ans << endl;
}

int main() {
    ull t=1;
    cin >> t;
    while(t--)  solve();
}
