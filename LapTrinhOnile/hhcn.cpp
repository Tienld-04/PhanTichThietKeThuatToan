#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    double x[n + 1], y[n + 1], dt[n + 1];
    //    a[i] = (x+y)*2;
    //     b[i] = x*y;
    for (int i = 0; i < n; i++) {
        // if(a[i] == (b[i]/y + y)*2 || b[i] == x*(a[i]/2 - x));
        dt[i] = 1 / 4 * pow(a[i], 2) + 4 * b[i];
        cout << " " << dt[i];
    }
    // for (int i = 0; i < n; i++) {
    //     if (dt[i] < 0) {
    //         cout << "khong co hinh chu nhat ";
    //     }
    //     if (dt[i] > 0) {
    //         x[i] = (-1 / 2 * a[i] + sqrt(dt[i])) / 2;
    //         x[i] = (-1 / 2 * a[i] - sqrt(dt[i])) / 2;
    //     }
    //     if (dt[i] == 0) {
    //         x[i] = (1 / 2 * a[i]) / 2;
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     if (x[i] > 0) {
    //         y[i] = b[i] / x[i];
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     cout << x[i] << " " << y[i];
    // }
}