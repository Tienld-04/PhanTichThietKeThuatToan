#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, u, v;
    cin >> n >> m;
    vector<int> A[n + 5];
    while (m--) {
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
    }
    int d[n + 5] = {}, k = 0;
    map<int, int> g;
    for (int i = 1; i <= n; i++) {
        if (d[i] == 0) {
            ++k;
            d[i] = k;
            g[k] = 1;
            stack<int> s;
            s.push(i);

            while (s.size()) {
                u = s.top();
                s.pop();
                for (int z : A[u]) {
                    if (d[z] == 0) {
                        d[z] = k;
                        s.push(z);
                        g[k]++;
                    }
                }
            }
        }
    }
    int maxSize = 0;
    for (int i = 1; i <= k; i++) {
        maxSize = max(maxSize, g[i]);
        cout << g[i] << endl;
    }
    // cout << k << "\n"
    //     << maxSize;
}
