#include <bits/stdc++.h>
#define int long long
#define ldt main
const int mod = (int)1e9 + 1;
using namespace std;
ldt() {
    int n;
    cin >> n;
    int a[n], d = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        d += a[i];
    }
    int x = d / 4;
    if (d % 4 == 0) {
        cout << x;

    } else {
        cout << x + 1;
    }
}
