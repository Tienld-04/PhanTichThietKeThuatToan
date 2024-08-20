#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    int k;
    cin >> k;
    double s;
    if (k < 90) {
        s = a * b * (double)sin(k * M_PI / 180);
    } else if (k > 90) {
        int x = k - 90;
        s = a * b * (double)cos(x * M_PI / 180);
    } else {
        s = a * b;
    }
    cout << fixed << setprecision(3) << s;
}