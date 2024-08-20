#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void Fibo(ll n) {
    ll fb[n];
    fb[0] = 0;
    fb[1] = 1;

    for (ll i = 0; i < n; i++) {
        if (i >= 2) {
            fb[i] = fb[i - 1] + fb[i - 2];
        }
        cout << fb[i] << " ";
    }
}
int main() {
    ldt ll n;
    cin >> n;
    if (n < 1 || n >= 46) {
        return 0;
    }
    Fibo(n);

    return 0;
}
