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

int main()
{

    flash;
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        ll a[n],b[m];
        ll suma,sumb;
        suma=sumb=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
            
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sumb+=b[i];   
        }

        if(suma>sumb){
            cout<<"Tsondu"<<nl;
        }
        else if(suma<sumb){
            cout<<"Tenzing"<<nl;
        }
        else{
            cout<<"Draw"<<nl;
        }




    }



}