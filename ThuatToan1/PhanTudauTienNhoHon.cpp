#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b) {
    return a > b;
}

int main() {
    ll q, n;
    cin >> n >> q;
    vector<ll> v;
    ll y, b[q];
    cin >> y;
    v.push_back(y);
    for (ll i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        if (v.back() >= x) {
            v.push_back(x);
        } else {
            v.push_back(v.back());
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> b[i];
        ll pos = lower_bound(v.begin(), v.end(), b[i], cmp) - v.begin();
        if (pos == v.size()) {
            cout << 0 << endl;
        } else {
            cout << pos + 1 << endl;
        }
    }
}