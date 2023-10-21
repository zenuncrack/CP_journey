#include <bits/stdc++.h>
using namespace std;
#define flash                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n';
typedef long long int ll;
ll bigModRecursive(ll a , ll b , ll m)
{
	a %= m ;
	if(b==0) return 1;
	ll res = bigModRecursive(a,b/2,m);
	if(b&1) return (res*res*a) % m ;
	else return (res*res) % m ;
}

int main (){
    ll t;
    cin >> t;
    while (t--){
        ll x,y,n;
        cin>>x>>y>>n;
        cout<<bigModRecursive(x,y,n)<<endl;
    }
    ll k;
    cin>>k;
}