#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int maxN = 1e5 + 5;
const int maxK = 17;
ll b[maxN][maxK];
void SparseTable(ll a[], ll n) {
    for (int i = 0; i < n; i++) {
        b[i][0] = a[i];
    }

    for (int k = 1; (1 << k) <= n; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            b[i][k] = max(b[i][k - 1], b[i + (1 << (k - 1))][k - 1]);
        }
    }
}
ll tb(ll L, ll R) {
    ll k = log2(R - L + 1);
    return max(b[L][k], b[R - (1 << k) + 1][k]);
}
int main() {
    ldt ll n, m, L, R;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SparseTable(a, n);
    while (m--) {
        cin >> L >> R;
        ll k = tb(L - 1, R - 1);
        cout << k << endl;
    }

    return 0;
}