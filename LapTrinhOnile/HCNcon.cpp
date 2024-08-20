#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1000000007;
int main() {
    int n, m;
    cin >> n >> m;
    long long d = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            d += (n - i + 1) * (m - j + 1);
        }
    }
    cout << d % mod;
}