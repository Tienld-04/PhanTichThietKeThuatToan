#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int a[20][20], n = 9;
bool kt(int u, int v, int t) {
    for (int i = 0; i < n; i++) {
        if (a[i][v] == t || a[u][i] == t) {
            return false;
        }
    }
    for (int i = u / 3 * 3; i < u / 3 * 3 + 3; i++) {
        for (int j = v / 3 * 3; j < v / 3 * 3 + 3; j++) {
            if (a[i][j] == t) {
                return false;
            }
        }
    }
    return true;
}

void TRY(int u, int v) {
    if (u == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << (j == n - 1 ? "\n" : " ");
            }
        }
        return;
    }
    if (a[u][v] != 0) {
        TRY(u + (v + 1) / n, (v + 1) % n);
    } else {
        for (int t = 1; t <= n; t++) {
            if (kt(u, v, t)) {
                a[u][v] = t;
                TRY(u + (v + 1) / n, (v + 1) % n);
                a[u][v] = 0;
            }
        }
    }
}

int main() {
    ldt for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    TRY(0, 0);
    return 0;
}