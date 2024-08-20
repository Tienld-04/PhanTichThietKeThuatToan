#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll v[n + 5];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (mp[v[i]] == 0)
            cout << v[i] << " ";
        mp[v[i]]++;
    }
    return 0;
}