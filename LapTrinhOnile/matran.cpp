#include <bits/stdc++.h>
#define int long long
#define ldt main
const int mod = (int)1e9 + 1;
using namespace std;

ldt() {
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int d[2 * n - 1];
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            d[i - j - 1 + n] += a[i][j];
        }
    }
    for (auto x : d) {
        cout << x << endl;
    }
}
