
 
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> benches;
        int count = 0;
        int cur;        
        for (int i = 0; i < n; ++i) {
            cin >> cur;
            count += cur;
        }
        m -= count;
        if (m > 0) cout << 0 << endl;
        else cout << - m << endl;
    }
}