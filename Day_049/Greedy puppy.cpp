#include<bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \             
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
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
    int t; cin>>t;
    while(t--){
        solve();
    }
}
