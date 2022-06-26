#include <bits/stdc++.h>

using namespace std;

bool is_power(int m, int tmp) {
    while (tmp % m == 0) {
        tmp /= m;
    }
    return tmp == 1;
}


int main() {
    int t;

    cin >> t;
    while (t--) {

        int n, m, k;

        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; ++i) {
            int asd;
            cin >> asd;
            a.push_back(asd);

        }
        cin >> k;
        for (int i = 0; i < k; ++i) {
            int asd;
            cin >> asd;
            b.push_back(asd);
        }
        bool answer = true;
        int i = 0, j = 0;
        int cur = 0; 
        while (i < n && j < k) {
            if (cur >= b[j]) {
                cur -= b[j];
                j++;
            }
            else if (a[i] == b[j]) {
                i++; j++;
            } else if (a[i] < b[j]) {
                int tmp = b[j] / a[i];
                if ((b[j] % a[i] != 0) || (!is_power(m, tmp))) {answer = false; break;}
                cur += a[i];
                i++;
            } else {
                int tmp = a[i] / b[j];
                if ((a[i] % b[j] != 0) || (!is_power(m, tmp))) {answer = false; break;}  
                if (a[i] % m != 0) {answer = false; break;}
                cur += a[i] - (a[i] / m);
                a[i] = a[i] / m; 
            }
        }
        answer = answer && i == n && j == k && cur == 0;
        cout << (answer ? "Yes" : "No") << '\n'; 
    }
}