#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int fav = a[f - 1]; 
        sort(a.rbegin(), a.rend());  
        bool flag1 = false, flag2 = false;
        for(int i = 0; i < n; i++){
            if( i < k ){
                if( fav  ==  a[i]){
                    flag1 = true;
                }
            }else{
                if( fav  ==  a[i]){
                    flag2 = true;
                }
            }
        }
        if(flag1 && flag2){
            cout << "MAYBE" << endl;
        }else if(flag1 && !flag2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}