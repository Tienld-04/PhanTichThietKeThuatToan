#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < a.size() - 2; i++) {
        for (ll j = i + 1; j < a.size() - 1; j++) {
            for (ll k = j + 1; k < a.size(); k++) {
                if ((a[i] * a[i] + a[j] * a[j] == a[k] * a[k]) || (a[i] * a[i] == a[j] * a[j] + a[k] * a[k]) || (a[i] * a[i] + a[k] * a[k] == a[j] * a[j])) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}