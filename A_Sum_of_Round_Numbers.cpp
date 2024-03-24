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
        string s;
        cin >> s;
        vector<string> v;

        for (ll i = 0; i < s.length(); i++)
        {

            if (s[i] == '0')
            {
                continue;
            }
            string temp;
            temp += s[i];
            for (ll j = 1; j < s.length() - i; j++)
            {
                temp += '0';
            }
            v.push_back(temp);
        }

        cout << v.size() << nl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << nl;
        }
    }

    return 0;
}