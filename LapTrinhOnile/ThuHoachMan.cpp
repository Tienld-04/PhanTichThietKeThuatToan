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
    Tienld;
    ll n, m;
    cin >> n >> m;
    ll v[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll sum = 0;
    v[n] = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i] <= m) {
            sum += v[i];
        } else if (v[i] > m) {
            sum += m;
            int x = v[i] - m;
            v[i + 1] += x;
        }
    }

    if (v[n] > m) {
        cout << sum + m;
    } else if (v[n] <= m) {
        if (v[n] == 0) {
            cout << sum;
        } else {
            cout << sum + v[n];
        }
    }
}
