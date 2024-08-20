#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main() {
    ldt ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll cnt = 0, max1 = 0, cnt1 = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == 0) {
            cnt++;
            x++;
        } else {
            cnt--;
            cnt1++;
        }
        if (cnt > max1) {
            max1 = cnt;
        }
        if (cnt < 0) {
            cnt = 0;
        }
    }

    if (cnt1 == 0) {
        y = cnt1;
    }
    if (x == 0) {
        cout << cnt1 - 1;
    } else {
        if (y) {
            cout << y;
        } else {
            cout << max1 + cnt1;
        }
    }
}