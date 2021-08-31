#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

void solve(){
    int a,b;
    cin >> a >> b;
    if(b/2+1 > a)
        cout << b % (b/2 +1) << endl;
    else 
        cout << b % a << endl;
}
int main() {
    int t=1;
    cin >> t;
    while(t--)
        solve();
}
