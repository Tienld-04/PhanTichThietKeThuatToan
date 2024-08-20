#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vt[n + 5];
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        vt[y].push_back(x);
    }
    int d[n + 5] = {}, k = 0;
    map<int, int> g;
    for (int i = 1; i <= n; i++) {
        if (d[i] == 0) {
            k++;
            d[i] = 1;
            g[k] = 1;
            stack<int> s;
            s.push(i);
            while (!s.empty()) {
                int u = s.top();
                s.pop();
                for (auto v : vt[u]) {
                    if (d[v] == 0) {
                        d[v] = k;
                        g[k]++;
                        s.push(v);
                    }
                }
            }
        }
    }
    int maxg = 0;
    for (auto i : g) {
        maxg = max(maxg, i.second);
    }
    cout << k << endl
         << maxg;
}