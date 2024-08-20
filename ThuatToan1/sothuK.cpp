#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int main() {
    ldt;
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << 1;
        return 0;
    }
    ll x = (k - 1) / (n - 1);
    ll y = (k - 1) % (n - 1);
    ll i = x * n + y + 1;
    cout << i % mod;
    return 0;
}