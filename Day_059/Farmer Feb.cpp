#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
typedef long long ll;
void solve(){
    int x,y;
    cin>> x >> y ;
    int sum = x+y;
    int temp = sum;
    sum++;
    while(true)
    {
        bool flag = true;
        for (int i = 2; i < sum/2 +1; i++)
        {
            if(sum%i==0)
                flag = false;
        }
        if(flag){
            cout << sum - temp << endl;
            return;
        }
        sum++;
    }
}
int main() {
    ll t=1;
    cin >> t;
    while(t--) solve();
}
