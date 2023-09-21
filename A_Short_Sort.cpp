#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
typedef long long int ll;
 
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        if(s=="bca"||s=="cab"){
            a=1;

        }
        cout<<(a?"NO":"YES")<<endl;


    }



}