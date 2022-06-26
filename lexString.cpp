 
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t ;
    cin >> t;
    while (t--) {
        int n, m, k, ka, kb;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        ka = k;
        kb = k;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        string res = "";
        int i = 0, j = 0;
        bool is_a = a[0] < b[0];
        // cout << "res: " << res << " k: " << k << " i: " << i << " j:  " << j <<  endl; 
        while (i < n && j < m) {
            if (is_a && kb && b[j] < a[i]) {
                is_a = false;
            }
            else if (!is_a && ka && b[j] > a[i]) {
                is_a = true;
            }

            if (is_a){
                res += a[i];
                i++;
                ka--;
                kb = k;
            } else {
                res+= b[j];
                j++;
                kb--;
                ka = k;
            }

            if (!ka || !kb){
                is_a = !is_a;
            }
            // cout << "res: " << res << " ka: " << k << " kb: " << kb << " i: " << i << " j:  " << j <<  endl; 
        }
        // cout << endl;
        cout << res << endl;
    }
}