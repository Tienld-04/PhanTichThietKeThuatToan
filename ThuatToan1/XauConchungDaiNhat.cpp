#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;

map<string, int> mp;
int C[1005][100] = {};

void Trace(string x, string y, int n, int m, string res) {
    if (n == 0 || m == 0) {
        reverse(res.begin(), res.end());
        mp[res]++;
        return;
    }

    if (x[n] == y[m]) {
        Trace(x, y, n - 1, m - 1, res + x[n]);
    } else {
        if (C[n - 1][m] >= C[n][m - 1]) {
            Trace(x, y, n - 1, m, res);
        }
        if (C[n][m - 1] >= C[n - 1][m]) {
            Trace(x, y, n, m - 1, res);
        }
    }
}

int main() {
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();

    x = ' ' + x;
    y = ' ' + y;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (x[i] == y[j]) {
                C[i][j] = C[i - 1][j - 1] + 1;
            } else {
                C[i][j] = max(C[i - 1][j], C[i][j - 1]);
            }
        }
    }

    Trace(x, y, n, m, " ");
    if (mp.empty()) {
        cout << "Khong co xau con chung";
    } else {
        for (auto i : mp) {
            cout << i.first << endl;
        }
    }

    return 0;
}