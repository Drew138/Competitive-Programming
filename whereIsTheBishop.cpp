
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        bool found_two = false, found_ans = false;
        for (int i = 1; i <= 8; ++i) {
            int count = 0;
            string line;
            cin >> line;
            for (int j = 0; j < 8; ++j) {
                if (line[j] == '#') count++;
            }
            if (count == 1 && found_two && !found_ans) {
                for (int j = 0; j < 8; ++j) {
                    if (line[j] == '#') cout << i << " " << j + 1 << endl;
                }
                found_ans = true;
            } 
            if (count == 2) {
                found_two = true;
            }
        }

    }
}