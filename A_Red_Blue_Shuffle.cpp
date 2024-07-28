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
        ll count = 0;
        string s1, s2;
        cin >> n;
        cin >> s1 >> s2;
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] > s2[i])
            {
                count++;
            }
            else if (s1[i] < s2[i])
            {
                count--;
            }
        }
        cout << ((count > 0) ? "RED" : ((count < 0) ? "BLUE" : "EQUAL")) << nl;

      
    }
      return 0;
}