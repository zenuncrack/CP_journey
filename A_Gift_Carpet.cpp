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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char str[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             cin>>str[i][j];
            }
        }
        char s[]="vika";
        int j=0;
        for(int i=0;i<m;i++){
            for(int k=0;k<n;k++){
                if(str[k][i]==s[j]){
                    j++;
                    break;
                }
            }
        }
        if(j>=4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
