#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        mp[x] = y; // td con tuong
    }
    ll x1, x2, y1, y2, cnt = 0;
    for (auto i = mp.begin(); i != mp.end(); i++) {
        for (auto j = next(i); j != mp.end(); j++) {
            x1 = i->first;
            y1 = i->second;
            x2 = j->first;
            y2 = j->second;
            if (abs(x1 - x2) == abs(y1 - y2)) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}