#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}




void solve(){
    ll n;
    cin>>n;
    vector<int> A(n),B(n);
    for (int i = 0; i < n; i++) cin>>A[i];
    for (int i = 0; i < n; i++) cin>>B[i];

    ll minn = INF;
    for (int i = 0; i < n; i++)
    {
        minn = min(minn , (A[0]+B[i])%n);
    }
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if( (A[0]+B[i])%n == minn){
            temp.push_back(i);
        }
        // if(B[i]==min)
    }
    debug(temp)
    // debug(minn)
    if(temp.size()==1){
        int indx = temp[0];
        for (ll i = 0; i < n; i++)
        {
            cout<<(A[i]+B[(indx+i)%n])%n<<" ";
        }
        cout<<endl;
    }
    else{
        int idx1 = temp[0];
        int idx2 = temp[1];
        bool fir = true, sec = true;
        for (int i = 0; i < n; i++)
        {
            if(fir && sec){
                // cout<<"Hi"<<endl;
                debug(i)
                // debug(fir)
                if((A[i]+B[(idx1+i)%n])%n==(A[i]+B[(idx2+i)%n])%n)
                    cout<<(A[i]+B[idx1+i])%n<<" ";
                else if((A[i]+B[(idx1+i)%n])%n>=(A[i]+B[(idx2+i)%n])%n)
                    fir = false;
                else 
                    sec = false;
                debug(fir)
                debug(sec)
            }
            if(!(fir && sec)){
                debug(sec)
                if(fir){
                    cout<<(A[i]+B[(idx1+i)%n])%n<<" ";
                }
                else{
                    cout<<(A[i]+B[(idx2+i)%n])%n<<" ";
                }
            }
            
            
        }
        
    }
    
    
}



int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
    ll t=1;
    cin >> t;
    while(t--) solve();
}
