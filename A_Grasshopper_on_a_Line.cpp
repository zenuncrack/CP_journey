#include <bits/stdc++.h>
using namespace std;
#define flash                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n';
vector<int> v;
void solve()
{
    int x, k;
    cin >> x >> k;
    if (x % k == 0)
    {
        cout << 2 << nl;
        cout << x-k+1 << " " << k+1<< nl;
    }
    else
    {
       cout<<1<<nl;
       cout<<x<<nl;
    }
}
int main()
{
    flash;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
