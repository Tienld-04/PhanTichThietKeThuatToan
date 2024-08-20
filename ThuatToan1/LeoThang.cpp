#include <bits/stdc++.h>

using namespace std;
long lt(int n) {
    int c[n];
    c[1] = 1;
    c[2] = 2;
    c[3] = 4;
    for (int i = 4; i <= n; i++) {
        c[i] = c[i - 1] + c[i - 2] + c[i - 3];
        cout << c[i] << " ";
    }
    return c[n];
}
int main() {
    int n;
    cin >> n;
    lt(n);
}
