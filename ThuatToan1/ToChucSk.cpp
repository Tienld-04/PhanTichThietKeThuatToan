#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;
typedef pair<int, int> sk;
bool cmp(sk a, sk b) {
    return a.first < b.first;
}
int main() {
    ldt;
    int m;
    cin >> m;
    while (m--) {
        int n, x = -INT_MAX, res = 0, y = -INT_MAX;
        cin >> n;
        sk a[n] = {};
        for (auto &x : a) {
            cin >> x.second >> x.first;
        }
        sort(a, a + n, cmp);
        for (auto k : a) {
            if (x < y) {
                swap(x, y);
            }
            if (k.second > x) {
                res++;
                x = k.first;
            } else if (k.second > y) {
                res++;
                y = k.first;
            }
        }
        cout << res << endl;
    }
}