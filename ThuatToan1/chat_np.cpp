#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, m, d = 0;
    cin >> n >> m;
    long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i <= n - 1; i++) {
        auto p = upper_bound(a, a + i, m - a[i]);
        d += (p - a);
    }
    cout << d;
}