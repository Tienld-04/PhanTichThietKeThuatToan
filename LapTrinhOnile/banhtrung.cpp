#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll cnt = 0, k = 0, t = 0;
    if (mp[4] != 0) {
        cnt += mp[4];
    }
    if (mp[3] == mp[1]) {
        cnt += mp[3];

    } else if (mp[3] > mp[1]) {
        if (mp[1] == 0) {
            cnt += mp[3];
        } else {
            cnt += mp[1];
            k = mp[3] - mp[1];
        }
    } else {
        if (mp[3] != 0) {
            cnt += mp[3];
            t = mp[1] - mp[3];
        } else {
            t = mp[1];
        }
    }
    ll x = mp[2] / 2, z = 0;
    if (mp[2] % 2 == 0) {
        cnt += x;
        if (t % 4 == 0) {
            z = t / 4;
        } else {
            z = t / 4 + 1;
        }
    } else {
        cnt += x;
        if (t % 4 == 0) {
            z = t / 4 + 1;
        } else {
            if (t % 4 <= 2) {
                z = t / 4 + 1;
            } else {
                z = t / 4 + 2;
            }
        }
    }
    cout << cnt + k + t + z;
}
