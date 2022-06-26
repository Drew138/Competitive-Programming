#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, z, ans = 0;
        cin >> n >> z;
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            ans = max(ans, tmp | z);
        }
        cout << ans << '\n';
    }
}