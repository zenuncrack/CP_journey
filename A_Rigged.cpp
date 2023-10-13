#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define nl '\n'
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
typedef pair<int, int> pr;

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i].first >= a[0].first && a[i].second >= a[0].second)
        {
            cout << "-1\n";
            return;
        }
    }
    cout << a[0].first << "\n";
}

int main (){
    flash;
    int t; cin>>t;
    while(t--){
        solve();
    }
}
