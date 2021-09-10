#include <iostream>
using namespace std;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)

#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"

//----------Working---Platform-------//

void solve(){
    ll n,pro,sum,max=-1;
    cin>>n;
    ll arr[n];
    f(0,n) cin>>arr[i];
    f(0,n-1){
        for(ll j=i+1;j<n;j++){
            pro = arr[i]*arr[j];
            sum=0;
            while(pro){
                sum+=pro%10;
                pro/=10;
            if (sum>max) max=sum;
            }
        }
    }
    cout<<max<<endl;
    
}

int main(){
    fast();
    int t ; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
