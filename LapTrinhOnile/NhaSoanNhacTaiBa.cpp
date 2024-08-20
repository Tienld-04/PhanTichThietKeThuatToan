#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9 + 7;
int main() {
    Tienld;
    vector<int> a(8);
    int k = 0, t = 0;
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 7; i++) {
        if (a[i] <= a[i + 1]) {
            k++;
        }
        if (a[i] >= a[i + 1]) {
            t++;
        }
    }

    if (k == 7 && t == 0) {
        cout << "TANG";
    } else if (k == 0 && t == 7) {
        cout << "GIAM";
    } else {
        cout << "KHONGBIET";
    }

    return 0;
}