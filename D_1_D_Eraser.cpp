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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='B'){
                ans++;
                i+=k-1;
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
    
}