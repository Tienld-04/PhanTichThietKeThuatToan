#include <bits/stdc++.h>
using namespace std;

// 10 6
// 8 9
// 3 5
// 4 5
// 3 4
// 1 7
// 2 7

// v[1] = {7}
// v[2] = {7}
// v[3] = {4, 5}
// v[4] = {3, 5}
// v[5] = {3, 4}
// v[7] = {1, 2}
// v[8] = {9}
// v[9] = {8}
// v[10] = {}

int n, m;
vector<int> v[1001];
bool check[1001];

void input() {
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(check, false, sizeof(check));
}
void dfs(int u) {
    cout << u << " ";
    check[u] = true;
    for (int i : v[u]) {
        if (!check[i]) {
            dfs(i);
        }
    }
    // cout << u << " ";
}
int main() {
    input();
    dfs(3);
    // for(int i=1; i<=n; i++){

    // }
}