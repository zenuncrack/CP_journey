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
int main(){
    flash;
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll runs = 0;
        ll wickets = 0;
        ll balls=0;
        ll overs=0;
       for(ll i=0;i<s.length();i++){
            if(s[i]=='W'){
                wickets++;
            }
            else{
                runs+=(s[i]-'0');
              
            }
         }
        overs=s.length()/6;
        balls=s.length()%6;
    
        if (overs==0||overs==1&&balls==0){
            cout<<overs<<"."<<balls<<" "<<"Over"<<" ";
        }
        else{
             cout<<overs<<"."<<balls<<" "<<"Overs"<<" ";
        }

        if(runs<=1){
            cout<<runs<<" "<<"Run"<<" ";
        }
        else{
             cout<<runs<<" "<<"Runs"<<" ";
        }

        if(wickets<=1){
            cout<< wickets<<" " << "Wicket. "<<endl;
        }
        else{
            cout<< wickets<<" " << "Wickets. "<<endl;
        }
    

    }
}