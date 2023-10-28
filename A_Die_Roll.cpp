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
    ll y,w;
    cin>>y>>w;
    ll mx=max(y,w);

    ll x = 6-mx+1;
        if(x==6){
            cout << "1/1" << endl;
        }
        else if(x==5||x==1){

            cout << x << "/6" << endl;
        }
       else if (x==4){
        cout<<"2/3"<<endl;

       }
       else if(x==2){
        cout<<"1/3"<<endl;

       }
       else{
        cout<<"1/2"<<endl;
       }
    }

    
    