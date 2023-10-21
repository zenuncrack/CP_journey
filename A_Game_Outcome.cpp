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

    cin>>n;
    
    ll a[n][n];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    ll c=0;
     for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ll sum_row=0;
            ll sum_col=0;
            for(ll k=0;k<n;k++){
                sum_row+=a[i][k];
                sum_col+=a[k][j];
            }
            if(sum_col>sum_row){
                c++;
            }
        }
     }
     cout<<c<<endl;


}