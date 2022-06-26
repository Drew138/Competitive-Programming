#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, x, t;
    cin >> t;
    while (t--){
        cin >> n;
        n -=3;
        x = n / 3;
        
        int a, b, c;
        b = x + 2;
        a = x + 1;
        c = x;
        if (n % 3 == 1){
            b++;
        } else if (n % 3 == 2){
            b++;a++;
        }
        cout << a << " " << b << " " << c << endl;
    }
}