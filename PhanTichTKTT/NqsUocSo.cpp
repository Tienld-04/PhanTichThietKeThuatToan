#include <bits/stdc++.h>
#define int long long
#define ldt main
const int mod = (int)1e9 + 1;
using namespace std;

int kt(int x) {
    if (x < 2) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
ldt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (!kt(i))
                d++;
            if (!kt(n / i))
                d++;
            if (!kt(i) && !kt(n / i) && i == n / i)
                d--;
        }
    }
    cout << d;
}