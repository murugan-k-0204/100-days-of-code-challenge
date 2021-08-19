#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
typedef pair<int,int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void solve(){
    long long n;
    cin >> n ;
    long long mm = INT_MAX, temp;
    for(int i=0; i<n ; i++){
        cin >> temp;
        mm = min(temp, mm);
    }
    cout << mm*(n-1) << endl;
}
int main() {
    ll t=1;
    cin >> t;
    while(t--) solve();
}
