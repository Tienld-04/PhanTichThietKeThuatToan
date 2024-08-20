#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int X[100], n;

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        X[i] = j;
        if (i == n) {
            for (int i = 1; i <= n; i++) {
                cout << X[i];
            }
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}
int main() {
    Tienld;
    cin >> n;
    Try(1);
}