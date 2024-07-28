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

int main(){
    flash;

    ll t;
    cin>> t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;

        ll ap = n*a;

        ll sing = n%2;
        ll pairs = n/2;

        ll promo= sing*a+pairs*b;

        cout<<min(ap,promo)<<nl;
    }


    return 0;
}