#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

void solve(){
    vector<int> nums(4);
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
    sort(nums.begin(),nums.end());
    string ans="NO";
    if(nums[0] == nums[1] && nums[2]==nums[3]) ans = "YES";
    cout << ans << endl;
}
signed main() {
    ull t=1;
    cin >> t;
    while(t--)
        solve();
}
