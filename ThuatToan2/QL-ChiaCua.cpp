#include <bits/stdc++.h>
using namespace std;
int n, t = 0, res = 1e9, a[100];

void ChiaCua(int k, int con1, int con2) {
    if (k - 1 == n) {
        res = min(res, con2 - con1);
        return;
    }
    if (con1 + a[k] <= t / 2) {
        ChiaCua(k + 1, con1 + a[k], con2);
    }
    if (con2 + a[k] < t / 2 + res) {
        ChiaCua(k + 1, con1, con2 + a[k]);
    }
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        t += a[i];
    }
    ChiaCua(1, 0, 0);
    cout << res;
}
