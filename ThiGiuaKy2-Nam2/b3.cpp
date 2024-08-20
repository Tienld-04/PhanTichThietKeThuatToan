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
    int n, q, x, y;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--) {
        cin >> x >> y;
        auto lower = lower_bound(a.begin(), a.end(), x);
        auto upper = upper_bound(a.begin(), a.end(), y);
        int cnt = upper - lower;
        cout << cnt << endl;
    }
    return 0;
}