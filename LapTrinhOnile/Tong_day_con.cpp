#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k, a[n + 1];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    // for (int i = 0; i < n; i++) {
    //     if (a[i] + a[i + 1] + a[i + 2] == k) {
    //         cout << a[i] << a[i + 1] << a[i + 2] << " ";
    //     }
    //     if (a[i] + a[i + 1] + a[i + 2] + a[i + 3] == k) {
    //         cout << endl
    //              << a[i] << a[i + 1] << a[i + 2] << a[i + 3] << " ";
    //     }
    // }
    cout << a[0] << " " << a[1] << " " << a[2];
}
