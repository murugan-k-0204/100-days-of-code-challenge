#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

void solve(){
    int n , limit, x,temp;
    cin >> n >> limit >> x;
    vector<pair<int,int>> players;
    vector<int> answers;

    for (int i = 0; i < n; i++)
    {
        cin >> temp ;
        players.push_back(mp(temp,i+1));
    }
    sort(all(players), greater<pair<int,int>>());

    bool is_greater = false;
    int tem = 0;
    while(tem<n && (tem < x || is_greater)){
        if(players[tem].first >= limit){
            is_greater = true;
            answers.push_back(players[tem].second);
            if(tem+1 == n){
                break;
            }
        }
        else if(tem<x){
            answers.push_back(players[tem].second);
            is_greater = false;
        }
        tem++;
    }
    sort(all(answers));
    cout << answers.size() << " ";
    for (int i : answers)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    ull t=1;
    cin >> t;
    while(t--)
        solve();
}
