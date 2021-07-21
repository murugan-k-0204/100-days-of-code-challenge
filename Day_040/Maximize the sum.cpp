#include<bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
#define int long long
void solve(){
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> frequency;
    int a;
    for (int i = 0; i < n; i++){
        cin>>a;
        frequency[a] += a;
    }
    priority_queue<int> qu;
    vector<int> new_array;
    for (auto a : frequency)
    {
        qu.push(a.second);
    }
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        if(qu.empty()) break;
        int top = qu.top();
        qu.pop();
        if(top<0){
            break;
        }
        res += top;
    }
    cout<<res<<endl;
}

signed main(){
    fast();
    int t; cin>>t;
    while(t--){
        solve();
    }
}
