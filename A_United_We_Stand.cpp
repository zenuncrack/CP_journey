#include <bits/stdc++.h>
using namespace std;
#define flash                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n';
typedef long long int ll;
typedef long long unsigned int llu;
 

 int main(){

    flash;
     int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long sum2 = 0;
    int mn1 = 2e9, mn2 = 2e9;
    for (int i = 1; i <= n; i++) {
      vector<int> v;
      int m; cin >> m;
      for (int j = 1; j <= m; j++) {
        int x; cin >> x;
        v.push_back(x);
      }
      sort(v.begin(), v.end());
      mn1 = min(mn1, v[0]);
      mn2 = min(mn2, v[1]);
      sum2 += v[1];
    }
    cout << mn1 + sum2 - mn2 << '\n';
  }



 }
