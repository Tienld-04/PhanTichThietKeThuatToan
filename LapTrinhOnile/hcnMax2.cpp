#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dt(ll a, ll b) {
    return a * b;
}

int main() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    // sx vector tang dan
    sort(v.begin(), v.end(), [](const pair<ll, ll> &p1, const pair<ll, ll> &p2) {
        return dt(p1.first, p1.second) > dt(p2.first, p2.second);
    });

    for (int i = 0; i < n; i++) {
        cout << dt(v[i].first, v[i].second) << " ";
    }
    ll max1 = dt(v[0].first, v[0].second);
    ll max2 = 0;
    ll k = 0, t = 0;
    for (int i = 1; i < n; i++) {
        ll curr = dt(v[i].first, v[i].second);
        if (curr != max1) {
            max2 = curr;
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