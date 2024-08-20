
#include <bits/stdc++.h>
using namespace std;

int n, q, a[1000], M, res = INT_MAX;
void nhap() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
void TRY(int k, int T, int s) {
    if (k == n - 1) {
        if ((M - T) % a[n] == 0) {
            int z = (M - T) / a[n];
            res = min(res, s + z);
        }
        return;
    }
    for (int t = 0; T + a[k + 1] * t <= M && t + s < res; t++)
        TRY(k + 1, T + a[k + 1] * t, t + s);
}
void sol() {
    nhap();
    for (int i = 1; i <= q; i++) {
        cin >> M;
        TRY(0, 0, 0);

        if (res == INT_MAX)
            cout << "-1" << endl;
        else
            cout << res << endl;
    }
}
int main() {
    sol();
}