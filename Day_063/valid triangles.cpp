#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ll long long 
#define ul unsigned long long int
#define endl "\n"
#define mod 1000000007
//----------Working---Platform-------//

void solve(){
    int a,b , c;
    cin >> a >> b >> c ;
    if(a+b+c==180) cout << "YES"<<endl;
    else cout << "NO" << endl;
    
}

int main(){
    fast();
    int t ; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
