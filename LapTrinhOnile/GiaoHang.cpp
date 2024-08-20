#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9 + 7;

int main() {
    Tienld;
    priority_queue<int> pq;
    vector<int> a[10000];
    int n, t, v, M = 0, res = 0;
    cin >> n;
    while (n--) {
        cin >> t >> v;
        M = max(M, t);
        a[t].push_back(v);
    }
    for (int i = M; i > 0; i--) {
        for (auto x : a[i]) {
            pq.push(x);
        }
        if (pq.size()) {
            res += pq.top();
            pq.pop();
        }
    }
    cout << res;
}