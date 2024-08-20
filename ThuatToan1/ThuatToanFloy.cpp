#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;

int main() {
    Tienld;
    int n, m, q, x, y, w;
    cin >> n >> m >> q;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 1e9));
    for (int i = 1; i <= n; i++)
        a[i][i] = 0;
    while (m--) {
        cin >> x >> y >> w;
        a[x][y] = w;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
    while (q--) {
        cin >> x >> y;
        if (a[x][y] == 1e9)
            a[x][y] = -1;
        cout << a[x][y] << endl;
    }
    return 0;
}