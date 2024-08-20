#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, m;
    cin >> n;
    cin >> p;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    queue<int> q;
    q.push(0);
    map<int, int> M;
    M[0] = 0;
    while (q.size()) {
        int u = q.front();
        q.pop();
        for (auto v : a)
            if (v + u <= 1e4 && M.find(v + u) == M.end()) {
                q.push(v + u);
                M[v+u] = M[u] + 1;
            }
    }
    while (p--) {
        cin >> m;
        if (M.find(m) == M.end())
            M[m] = -1;
        cout << M[m] << "\n";
    }
}
