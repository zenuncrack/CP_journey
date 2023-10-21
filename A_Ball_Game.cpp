#include <bits/stdc++.h>
using namespace std;
#define flash                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n';
typedef long long int ll;
typedef long long unsigned int llu;

int main()
{

    flash;

    ll n;
    cin >> n;


    ll k=1;
    ll p=1;
    for(ll i =1 ;i<n;i++){
       k+=i;
       if(k>n)k%=n;
       cout<<k<<" ";
    }
    cout<<nl;
}