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

int main()
{
    flash;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        set<pair<int, int>> st;
        for (int i = 1; i < s.size(); i++)
        {
            st.insert({s[i - 1], s[i]});
        }
        cout << st.size() << nl;
    }

    return 0;
}
