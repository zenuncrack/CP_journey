#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define nl '\n'
#define F first;
#define S second;
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
typedef long double ld;

void solve(){
    ll n;
    cin >> n;
    ll p=0,q=INT_MAX;
    vector<int,int>v;
    unordered_map<int,int>mp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<2;j++){
            cin>>v[i][j];
        }
    }

      for(ll i=0;i<n;i++){
        if(v[i][0]==1){
            p=max(p,v[i][1]);
        }
        else if(v[i][0]==2){
            q=min(q,v[i,1]);
        }
        else{
            mp[v[i][1]]++;
        }
      
      }

      



}

int main(){
    flash;

    ll t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}