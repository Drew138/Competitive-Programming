#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool is_zero = true;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            if (is_zero && tmp != 0) {
                ++ans;
            } 
            is_zero = tmp == 0;
        }
        if (ans > 2) ans = 2;
        cout << ans << '\n';
    }
}