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
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        for (ll i = 0; i < 3; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll count = 5;
        while (count != 0)
        {
            if (v[0]<= v[1] & v[0] <= v[2])
            {
                v[0] ++;
                count--;
            }
            else if (v[1]< v[0] & v[1] < v[2])
            {
                v[1] ++;
                count--;
            }
            else
            {
                v[2] ++;
                count--;
            }
        }
        cout << (v[0] * (v[1] * v[2])) << nl;
    }
}