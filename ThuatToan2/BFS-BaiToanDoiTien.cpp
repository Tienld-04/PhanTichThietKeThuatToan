#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    queue<int> q;
    map<int, int> mp;
    mp[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : a) {
            if (v + u <= 10000 && mp.find(v + u) == mp.end()) {
                q.push(v + u);
                mp[v + u] = mp[u] + 1;
            }
        }
    }
    while (m--) {
        int b;
        cin >> b;
        if (mp.find(b) == mp.end())
            mp[b] = -1;
        cout << mp[b] << "\n";
    }
    return 0;
}