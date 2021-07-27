#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define endl "\n"
//----------Working---Platform-------//
void solve(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    map<int,int> scoreFreq;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        scoreFreq[arr[i]]++;
    }
    int ranks = scoreFreq.size()+1;
    int pla, score;
    for (int i = 0; i < q; i++)
    {
        cin>>pla>>score;
        scoreFreq[arr[pla-1]]--;
        if(scoreFreq[arr[pla-1]]==0)
            ranks--;
        scoreFreq[score]++;
		arr[pla-1] = score;
        if(scoreFreq[score]==1)
            ranks++;
        cout<<ranks<<endl;
    }
}
int main(){
    fast();
    int t=1 ; cin>>t;
    while(t--)
        solve();
    return 0;
}
