#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int for_clockwise_to_east(char pos){
    if(pos == 'N') return 1;
    if(pos == 'E') return 0;
    if(pos == 'W') return 2;  
    return 3;
}
int for_clockwise_to_west(char pos){
    if(pos == 'N') return 3; 
    if(pos == 'E') return 2;
    if(pos == 'W') return 0;
    return 1;
}

void solve(){
    int n,x,y,temp_east,temp_west;
    string s;
    cin >> n >> s >> x >> y;
    vector<int> east_facing_cost(n);
    vector<int> west_facing_cost(n);
    for (int i = 0; i < n; i++)
    {
        //for east facing
        temp_east = for_clockwise_to_east(s[i]);
        east_facing_cost[i] = min(x*temp_east, y*((4-temp_east)%4));
        //for west facing
        temp_west = for_clockwise_to_west(s[i]);
        west_facing_cost[i] = min(x*temp_west, y*((4-temp_west)%4));
    }
    for (int i = 1; i < n; i++)
        east_facing_cost[i] += east_facing_cost[i-1];
    for (int i = n-2; i >=0; i--)
        west_facing_cost[i] += west_facing_cost[i+1];
  
    int result_cost = min(east_facing_cost[n-1],west_facing_cost[0]);
    for (int i = 0; i < n-1; i++)
        result_cost = min(result_cost,east_facing_cost[i]+west_facing_cost[i+1]);
   
    cout << result_cost << endl;
}
signed main() {
    int t=1; cin >> t;
    while(t--) solve();
}
