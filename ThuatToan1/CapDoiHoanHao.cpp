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
    int n, m, res = 0, i, j = 0;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &x : a)
        cin >> x;
    for (auto &y : b)
        cin >> y;
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < m; i++) {
        while (j < n && a[j] <= b[i])
            j++;
        if (j < n) {
            res++;
            j++;
        }
    }
    cout << res;
}
