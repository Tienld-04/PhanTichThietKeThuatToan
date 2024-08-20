#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 1e9 + 7;

ll POW(ll a, ll n) {
    if (n == 0)
        return 1;
    if (n % 2)
        return POW(a * a % M, n / 2) * a % M;
    return POW(a * a % M, n / 2);
}
int main() {
    ll A[100005] = {1, 1}, B[100005] = {1, 1};
    for (int i = 2; i <= 1e5; i++) {
        A[i] = A[i - 1] * i % M;
        B[i] = B[i - 1] * POW(i, M - 2) % M;
    }
    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << A[n] * B[k] % M * B[n - k] % M << endl;
    }
    return 0;
}