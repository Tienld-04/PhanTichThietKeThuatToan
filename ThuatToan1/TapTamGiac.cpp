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
    int n, res = 2, j = 0, k = 2;
    cin >> n;
    int a[n];
    for (auto &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    for (int i = 2; i < n; i++) {
        while (a[j] + a[j + 1] <= a[i])
            j++;
        res = max(res, i - j + 1);
        k = min(k, i - j + 1);
    }
    if (res == k) {
        cout << "Khong the tao ra day thoa man";
    } else {
        cout << res;
    }
}