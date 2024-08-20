#include <bits/stdc++.h>
#define int long long
#define ldt main
const int mod = (int)1e9 + 1;
using namespace std;
ldt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    double a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    double t = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] == x || a[i][j] == y;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[0][j] == x) {
                cout << "X";
            } else if (a[0][j] == y) {
                cout << "O";
            } else if (a[1][j] == x) {
                cout << "X";
            } else if (a[1][j] == y) {
                cout << "O";
            } else if (a[2][j] == x) {
                cout << "X";
            } else if (a[2][j] == y) {
                cout << "O";
            } else if (i == j) {
                if (a[i][j] == x) {
                    cout << "X";
                } else if (a[i][j] == y) {
                    cout << "O";
                }
            }
            //
            else if (a[i][0] == x) {
                cout << "X";
            } else if (a[i][0] == y) {
                cout << "O";
            } else if (a[i][1] == x) {
                cout << "X";
            } else if (a[i][1] == y) {
                cout << "O";
            } else if (a[i][2] == x) {
                cout << "X";
            } else if (a[i][2] == y) {
                cout << "O";
            } else if (i + j == 2) {
                if (a[i][j] == x) {
                    cout << "X";
                } else if (a[i][j] == y) {
                    cout << "O";
                }
            } else {
                cout << "D";
            }
        }
    }
}
