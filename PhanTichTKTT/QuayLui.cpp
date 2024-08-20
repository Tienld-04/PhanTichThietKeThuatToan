#include <bits/stdc++.h>
using namespace std;

void TRY(int *x, int k, int n) {
    if (k == n) {
        for (int i = 1; i <= n; i++) {
            cout << x[i];
        }
        cout << endl;
    } else {
        x[k + 1] = 0;
        TRY(x, k + 1, n);
        x[k + 1] = 1;
        TRY(x, k + 1, n);
    }
}
int main() {
    int x[100], n;
    cin >> n;
    TRY(x, 0, n);
}