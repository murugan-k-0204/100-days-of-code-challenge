#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int groups = 0; //updated here from 1 to 0
    int last_person;
    bool find_first_person_pos = true;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(find_first_person_pos){
            if(c=='1'){
                last_person = i+1; 
                find_first_person_pos = false;
                groups++; // updated here
            }
            continue;
        }
        if(c == '1'){
            if(i - last_person +1 <= k){
                last_person = i+1;
            }
            else if(i - last_person <= k){
                last_person = i;
            }
            else if(i - last_person-1 <= k){
                last_person = i-1;
            }
            else{
                groups++;
                last_person = i+1;
            }
        }
    }
    cout << groups << endl;
}

int main() {
   fast();
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}
