#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        int m1 = m;
        if (m1 < a[i - 1]) {
            res += m1;
            continue;
        }
        res += a[i - 1];
        m1 -= a[i - 1];
        if (m1 < a[i]) {
            res += m1;
            a[i] -= m1;
        } else {
            res += a[i];
            a[i] = 0;
        }
    }

    if (m < a[n]) {
        res += m;
        a[n] -= m;
    } else {
        res += a[n];
        a[n] = 0;
    }
    cout << res;
}
