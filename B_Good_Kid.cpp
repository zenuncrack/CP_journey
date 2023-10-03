#include <bits/stdc++.h>
using namespace std;
#define flash                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n';
typedef long long int ll;
typedef long long unsigned int llu;
 

 int main(){

    flash;
    ll t ;
    cin>>t;
    while(t--){
        vector<ll>v;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v[0]+=1;
        ll ans=1;
        for(int i=0;i<n;i++){
            ans*=v[i];
        }
    cout<<ans<<endl;

    }
 }