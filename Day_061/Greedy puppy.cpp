#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k ;
    int result=0;
    for (int i = 2; i <= k; i++)
        result = max(result , n%i );
    cout << result << endl;
}
int main(){
    fast();
    int t ; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
