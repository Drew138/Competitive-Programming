
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n), b(n);
        int tmp = n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int diff = 0, diff_zero= 0;
        bool did_break = false, f_diff = false, z_diff = false;
        for (int i = 0; i < n; ++i) {
            // cout << "i: " << i<< endl;
            if ((a[i] < b[i]) || (f_diff && (a[i] - b[i] != diff) && (b[i] > 0))){
                did_break = true;
                break;
            }
            if (b[i] > 0) {
                f_diff = true;
                diff = a[i] - b[i];             
            }else{
                diff_zero = max(a[i] - b[i], diff_zero);             
                z_diff = true;
            }
            if (z_diff && f_diff && diff_zero > diff){
                did_break = true;
                break;
            }
        }
        if (did_break){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
}