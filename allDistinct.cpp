
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cur;
        unordered_map<int, int> counts;
        for (int i = 0; i < n; i++) {
            cin >> cur;
            counts[cur]++;
        }
        priority_queue<int> pq;
        for (auto & it: counts) {
           pq.push(it.second);
        }
        while (pq.size() >= 2 && pq.top() > 1) {
            int a, b;
            a = pq.top();
            pq.pop();


            b = pq.top();
            pq.pop();
            a -= 1;
            b -= 1;
            pq.push(a);
            if (b) pq.push(b);
        }
        cout << pq.size() << endl;

    }
}