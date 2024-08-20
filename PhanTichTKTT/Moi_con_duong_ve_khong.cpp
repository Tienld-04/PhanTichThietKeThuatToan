#include <bits/stdc++.h>
// #define int long long
using namespace std;
long M = 1e9 + 7;
map<int, long> D;
long zero(int n) {
    if (D.find(n) != D.end())
        return D[n];
    if (n == 0)
        return D[0] = 1;
    long s = 0;
    for (int a = 1; a * a <= n; a++) {
        if (n % a == 0)
            s += zero((a - 1) * (n / a + 1));
    }
    return D[n] = s % M;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << zero(a[i]) << endl;
    }
}