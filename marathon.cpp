
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, res = 0;
        cin >> a >> b >> c >> d;
        res += b > a;
        res += c > a;
        res += d > a;
        cout << res << endl;
    }
}