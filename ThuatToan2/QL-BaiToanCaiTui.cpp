#include <bits/stdc++.h>
using namespace std;
int M, n, a[50], res = 0;
void CaiTui(int k, int T) {
    if (res == M) {
        return;
    }
    if (k - 1 == n) {
        res = max(res, T);
    } else {
        if (T + a[k] <= M) {
            CaiTui(k + 1, T + a[k]);
        }
        CaiTui(k + 1, T);
    }
}
int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    CaiTui(1, 0);
    cout << res;
}