#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dt(ll a, ll b) {
    return a * b;
}
bool sx(int a, int b) {
    return a > b;
}
int main() {
    int n;
    cin >> n;
    vector<ll> c(n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
        c[i] = dt(v[i].first, v[i].second);
    }
    sort(c.begin(), c.end(), sx);

    ll k = 0, t = 0;
    ll max1 = c[0], max2 = 0;
    for (int i = 1; i < n; i++) {
        ll x = c[i];
        if (x != max1 && x == dt(v[i].first, v[i].second)) {
            max2 = x;
            k = v[i].first;
            t = v[i].second;
            break;
        }
    }
    if (max2 == 0) {
        cout << "NO";
    } else {
        cout << k << " " << t;
    }

    return 0;
}