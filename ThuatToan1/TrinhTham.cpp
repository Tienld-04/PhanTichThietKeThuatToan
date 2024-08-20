#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;
int main() {
    Tienld;
    deque<pair<ll, ll>> dq;
    ll n, k, x;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        while (!dq.empty() && dq.front().second <= i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && dq.back().first <= x) {
            dq.pop_back();
        }
        dq.push_back({x, i});
        if (i >= k) {
            cout << dq.front().first << " ";
        }
    }
}
