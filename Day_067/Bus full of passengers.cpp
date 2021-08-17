#include<bits/stdc++.h>

using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

void solve(){
    int n,m, q;
    cin >> n >> m >> q ;
    map<int,int> bus;
    bool flag = true;
    char d;
    int tem;
    int bus_count = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> d >> tem;
        if(d=='-') bus_count--;
        else if(d == '+') bus_count++;

        if(bus_count > m) flag = false;

        if(bus_count < 0) flag = false;

        if(bus[tem] == 0 && d=='-')
            flag = false;
        bus[tem]++;
        
    }
    cout << (flag ? "Consistent" : "Inconsistent" ) << endl;
}
int main() {
    ull t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}
