#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
//---------Working---Platform-------//
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll> characters;
    for (char i: s)
        characters[i]++;
    for (auto i: characters)
    {
        if (i.second%2!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    fast();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
