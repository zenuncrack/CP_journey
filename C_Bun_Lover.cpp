#include<bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main(){

    flash;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<< ((n + 1) * n) + n + 2 << nl;
    }
   

    return 0;
}
