#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;
typedef pair<int, int> sk;
int main() {
    ldt;
    int n, x = -INT_MAX, res = 0;
    cin >> n;
    sk a[n];
    for (auto &x : a) {
        cin >> x.second >> x.first;
    }
    sort(a, a + n);
    for (auto k : a) {
        if (k.second > x) {
            res++;
            x = k.first;
        }
    }
    cout << res;
}