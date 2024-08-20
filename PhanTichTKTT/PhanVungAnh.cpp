#include <bits/stdc++.h>
using namespace std;

int A[205][205], n, m;
int dfs(int u, int v) {
    stack<pair<int, int>> s;
    int dem = 1;
    s.push({u, v});
    while (s.size()) {
        int x = s.top().first, y = s.top().second;
        s.pop();
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (1 <= x + i && x + i <= n && 1 <= y + j && y + j <= m && A[x + i][y + j] == 0) {
                    A[x + i][y + j] = 1;
                    s.push({x + i, y + j});
                    dem++;
                }
            }
        }
    }
    return dem;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> A[i][j];
        }
    }

    int k = 0, G[n * m + 5] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i][j] == 0) {
                k++;
                G[k] = dfs(i, j);
            }
        }
    }

    sort(G + 1, G + k + 1);

    cout << k << "\n";
    for (int i = 1; i <= k; i++) {
        cout << G[i] - 1 << " ";
    }

    return 0;
}