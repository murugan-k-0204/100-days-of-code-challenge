#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int p,s;
        cin>>p>>s;
        float height,volume;
        height =( p - sqrt(p*p - 24*s))/12;
        volume = (s/2 - height*(p/4-height))*height;
        printf("%.2f\n",volume);

    }
}
