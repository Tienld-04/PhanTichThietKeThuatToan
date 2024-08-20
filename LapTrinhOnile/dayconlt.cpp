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
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll L = 0, R = 0;
    map<ll, ll> mp;
    ll cnt = 0;
    while (R < n) {
        mp[a[R]]++;
        while (mp[a[R]] > 1) {
            mp[a[L]]--;
            L++;
        }
        cnt = max(cnt, R - L + 1);
        R++;
    }
    cout << cnt;
    return 0;
}