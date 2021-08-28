#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)

#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"

//----------Working---Platform-------//

bool isprime(int n){
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 ||n%(i+2)==0) return false;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    if(isprime(n)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int main(){
    fast();
    int t ; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
