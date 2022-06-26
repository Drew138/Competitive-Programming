
#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> prices;
    for (int i = 0; i < n ; i++) {
        long long tmp;
        cin >> tmp;
        prices.push_back(tmp);
    }
    sort(prices.begin(), prices.end());

    for (int i = 1; i < n ; i++) {
        prices[i] += prices[i - 1];
    }
    for (int j = 0; j < q ; j++) {
        int x, y;
        cin >> x >> y;
        cout << prices[n - 1 - (x - y)] - prices[n - x - 1] << endl;
    }
}

