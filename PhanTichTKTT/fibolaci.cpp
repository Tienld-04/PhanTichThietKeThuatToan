#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 1e9 + 9;
typedef pair<ll, ll> p;
p fibo(int n) {

    if (n == 1)
        return {1, 1};
    else {
        p a = fibo(n - 1);

        return {a.second, a.second + a.first};
    }
}
int main() {
    int n;
    cin >> n;
    p a = fibo(n);
    cout << a.second;
    // ll sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     p a = fibo(i);
    //     sum = (sum + a.second) % MOD;
    // }
    // cout << sum;
}