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
    ll t ;
    cin>> t;
    while(t--){
        ll n ;
        cin >> n;
        vector<int>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll neg=0,pos=0,ans=0;

        for(ll i=0;i<n;i++){
            if(v[i]>0){
                pos++;
            }
            else{
                neg++;
            }
        }

        while(neg>pos){
            neg--;
            pos++;
            ans++;
        }

        if(neg%2==1){
            ans++;
        }

        cout<<ans<<endl;

    }



}