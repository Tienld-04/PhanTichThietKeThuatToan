#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, x = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n / b; i++) {
        if ((n - a * i) % b == 0) {
            cout << i + (n - a * i) / b;
            x = 1;
            break;
        }
    }
    if (!x)
        cout << -1;
}
