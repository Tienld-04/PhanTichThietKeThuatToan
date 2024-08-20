#include <bits/stdc++.h>
using namespace std;

// 10 11
// 1 2
// 1 3
// 1 5
//  1 10
// 2 4
// 3 6
// 3 7
// 3 9
// 6 7
// 5 8
// 8 9

int n, m;
vector<int> A[1001];
bool vis[1001];
void input() {
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    memset(vis, false, sizeof(vis));
}
void bfs(int u) {
    queue<int> q;
    q.push(u);
    vis[u] = true;
    while (q.empty() == false) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (auto i : A[v]) {
            if (vis[i] == false) {
                q.push(i);
                vis[i] = true;
            }
        }
    }
}
int main() {
    input();
    bfs(1);
}