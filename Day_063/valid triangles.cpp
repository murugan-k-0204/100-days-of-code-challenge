#include <bits/stdc++.h>

using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define mod 1000000007
//----------Working---Platform-------//
void solve(){
    int a, b, c;
    cin >> a >> b >> c ;
    int sum = a+b+c;
    if(sum==180) cout << "YES"<<endl;
    else cout << "NO" << endl;
}
int main(){
    fast();
    int t ; cin>>t;
    while(t--)
        solve();
    return 0;
}
