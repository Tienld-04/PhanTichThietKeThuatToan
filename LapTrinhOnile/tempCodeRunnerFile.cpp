#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    if (n > m) {
        for (ll i = n - 1; i >= n - m; i--) {
            sum += v[i];
        }
        cout << sum;
    } else if (n <= m) {
        for (int i = 0; i < min(n, m); i++) {
            sum += v[i];
        }
        cout << sum;
    }
}