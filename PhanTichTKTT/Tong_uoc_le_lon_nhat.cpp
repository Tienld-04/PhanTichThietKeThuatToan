#include <bits/stdc++.h>
#define ll long long
using namespace std;
long sgom(ll n) {
    if (n < 2) {
        return n;
    }
    return ((n + 1) / 2) * ((n + 1) / 2) + sgom(n / 2);
}
int main() {
    ll n;
    cin >> n;
    int a, b;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    for (int i = 0; i < n; i++)
        cout << sgom(v[i].second) - sgom(v[i].first - 1) << endl;
    // int a, b;
    // cin >> a >> b;
    // cout << sgom(b) - sgom(a-1);
}