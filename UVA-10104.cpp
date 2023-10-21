#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define nl '\n'
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
ll x,y,d;

void gcd(ll a ,ll b){
    if(b==0){
        x=1;
        y=0;
        d=a;
       return;
    }
    
    gcd(b,a%b);
   ll x1=y;
   ll y1=x-y*(a/b);
    
    x=x1;
    y=y1;
}


int main(){
    flash;

    ll a ,b;
       while (cin >> a >> b) {
        gcd(a, b);
        cout << x << " " << y << " " << d << endl;
    }

   
}