#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll M = 1e9 + 9;

void Fibo(ll n, ll &a, ll &b) {
    if (n == 0) {
        a = 1;
        b = 0;
        return;
    }
    ll x, y;
    Fibo(n / 2, x, y);
    a = (x * x % M + y * y % M) % M;
	b = (x * y % M + y * (x - y) % M) % M;
    if (n % 2) {
        a = (a + b) % M;
        b = (a - b) % M;
    }
}
int main() {
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    Fibo(n + 1, a, b);
    cout << (a - 1 + M) % M;
}
