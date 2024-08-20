#include <bits/stdc++.h>
using namespace std;

int a[1000], n, res = 1e9, M, q;
void TRY(int k, int T, int t) {
    if (k == n) {
        if ((M - T) % a[n] == 0)
            res = min(res, t + (M - T) / a[n]);
        return;
    }
    for (int z = min(res - t - 1, (M - T) / a[k]); z >= 0; z--) {
        TRY(k + 1, T + a[k] * z, t + z);
    }
}
int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    for (int i = 1; i <= q; i++) {
        cin >> M;
        res = 1e9;
        TRY(1, 0, 0);
        cout << res << endl;
    }
}
