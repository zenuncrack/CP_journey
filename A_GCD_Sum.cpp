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

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

ll di(ll x)
{
    ll sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    flash;

    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        while (1)
        {
            if (gcd(x, di(x)) > 1)
            {
                cout << x << endl;
                break;
            }
            else
            {
                x++;
            }
        }
    }
}
