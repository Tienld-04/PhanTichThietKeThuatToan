#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mx = 1000005;
bool prime[mx];
void kt() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < mx; i++) {
        if (prime[i]) {
            for (int j = i * i; j < mx; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    ldt
    kt();
    int n;
    cin >> n;
    while (n--) {
        int L, R, cnt = 0;
        cin >> L >> R;
        for (int i = L; i <= R; i++) {
            if (prime[i]) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}