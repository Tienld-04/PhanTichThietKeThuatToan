#include <bits/stdc++.h>
#define int long long
#define ldt main
const int mod = (int)1e9 + 1;
using namespace std;
ldt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string x;
    cin >> x;
    double a[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    double t = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j == n) {
                t += a[i][j];
            }
        }
    }
    if (x == "S") {
        cout << fixed << setprecision(1) << t;
    }

    if (x == "M") {
        cout << fixed << setprecision(1) << t / 12;
    }
}
