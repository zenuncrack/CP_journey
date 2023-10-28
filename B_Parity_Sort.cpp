#include <bits/stdc++.h>
using namespace std;

#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl '\n'

int main() {
    flash;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> s;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < n; i++) {
            s.push_back(v[i]);
        }

        sort(s.begin(), s.end());

        bool f = true; // Initialize to true

        for (int i = 0; i < n; i++) {
            if ((s[i] % 2 != 0 && v[i] % 2 == 0) || (s[i] % 2 == 0 && v[i] % 2 != 0)) {
                f = false;
                break;
            }
        }

        if (f) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }

    return 0;
}
