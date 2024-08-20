#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int max_n = 10001;
struct x_y_w {
    int x, y, w;
};
int n, m;
vector<pair<int, int>> a[max_n];
bool used[max_n];
int parent[max_n], d[max_n];
void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        a[x].push_back({y, w});
        a[y].push_back({x, w});
    }
    memset(used, false, sizeof(used));
    for (int i = 1; i <= n; i++) {
        d[i] = INT_MAX;
    }
}
void prim(int u) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<x_y_w> MST;
    int sum = 0;
    pq.push({0, u});
    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int k = top.second, ts = top.first;
        if (used[k])
            continue;
        sum += ts;
        used[k] = true;
        if (u != k) {
            MST.push_back({k, parent[k], ts});
        }
        for (auto it : a[k]) {
            int y = it.first, w = it.second;
            if (!used[y] && w < d[y]) {
                pq.push({w, y});
                d[y] = w;
                parent[y] = k;
            }
        }
    }
    cout << sum << endl;
    for (auto it : MST) {
        cout << it.x << " " << it.y << "  " << it.w << "\n";
    }
}

int main() {
    nhap();
    prim(1);
    return 0;
}