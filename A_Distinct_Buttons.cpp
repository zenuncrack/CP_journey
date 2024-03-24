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
        ll n;
        cin >> n;
        bool x1, y1, x2, y2;
        x1 = y1 = x2 = y2 = false;
        while (n--)
        {
            ll a, b;

            cin >> a >> b;
            if (a < 0)
            {
                x1 = true;
            }
            if (a > 0)
            {
                x2 = true;
            }
            if (b < 0)
            {
                y1 = true;
            }
            if (b > 0)
            {
                y2 = true;
            }
        }
        if (x1 && x2 && y1 && y2)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }

    return 0;
}