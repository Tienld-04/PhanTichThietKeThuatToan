#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll pow(ll a, ll n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0)
        return pow(a * a % 1000, n / 2);
    return pow(a * a % 1000, n / 2) * a % 1000;
}
int main() {
    ll a, n;
    cin >> a >> n;
    a = a % 1000;
    cout << setw(3) << setfill('0') << fixed << pow(a, n);
}