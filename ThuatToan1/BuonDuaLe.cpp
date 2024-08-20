#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;
int main() {
    ldt;
    int n, x, t, k, m, res = 0;
    cin >> n >> k >> m;
    queue<int> q;
    for (int i = 1; i <= n + k - 1; i++) {
        if (i <= n)
            cin >> x;
        else
            x = 0;
        q.push(x);
        while (q.size() > k) {
            q.pop();
        }
        t = 0;
        while (q.size() && q.front() + t <= m) {
            t += q.front();
            q.pop();
        }
        if (q.size()) {
            q.front() -= m - t;
            t = m;
        }
        res += t;
    }
    cout << res;
}
