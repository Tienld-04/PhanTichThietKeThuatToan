#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9;

int main() {
    Tienld;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &x : v) {
        cin >> x.Ti >> x.Vi;
    }
    sort(v.begin(), v.end());
    ll maxV = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 0; i < n; i++) {
        pq.push(v[i].Vi);
        // cout << pq.size() << " ";
        // cout << "  (" << pq.top() << ")  ";
        if (pq.size() > v[i].Ti) {
            pq.pop();
        }
    }
    while (!pq.empty()) {
        maxV += pq.top();
        pq.pop();
    }
    cout << endl
         << maxV;
}