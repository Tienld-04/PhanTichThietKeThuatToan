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
void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        a[x].push_back({y, w});
        a[y].push_back({x, w});
    }
    memset(used, false, sizeof(used));
}
void prim(int u) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<x_y_w> MST;
    int sum = 0;
    pq.push({0, u});
    while (!pq.empty()) {
        pair<int, int> top = pq.top();
        pq.pop();
        int k = top.second, ts = top.first;
        if (used[k])
            continue;
        sum += ts;
        used[k] = true;
        for (auto it : a[k]) {
            int y = it.first, w = it.second;
            if (!used[y]) {
                pq.push({w, y});
            }
        }
    }
    cout << sum << endl;
}

int main() {
    nhap();
    prim(1);
    return 0;
}