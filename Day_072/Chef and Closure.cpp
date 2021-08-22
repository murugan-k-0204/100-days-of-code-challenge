#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

void solve(){
    int n,temp, count=0;
    bool is_one = false;
    int count_of_1inv=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp==1) is_one = true;
        else if(temp==-1) count_of_1inv++;
        else if(temp!=0 && temp!=1)
            count++;
    }
  
    if(count==0){
        if(count_of_1inv < 2)
            cout << 1 << endl;
        else if(count_of_1inv > 1){
            debug(is_one)
            if(is_one == true)
                cout << 1 << endl;
            else {
                cout << 0 << endl;
            }
        }
    }
    else if(count==1) {
        if(count_of_1inv!=0){
            cout << 0 << endl;
        }
        else cout << 1 << endl;
    }
    else if(count>1) cout << 0 << endl;
}
int main() {
    ull t=1;  cin >> t;
    while(t--)
        solve();
}
