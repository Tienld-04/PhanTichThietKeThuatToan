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
    int n, a, b, M, q, c[100004] = {};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        for (int j = 1e4; j >= a; j--) {
            c[j] = max(c[j], c[j - a] + b);
        }
    }
    cin >> q;
    while (q--) {
        cin >> M;
        cout << c[M] << endl;
    }
}