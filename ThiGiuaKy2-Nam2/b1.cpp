#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int main() {
    Tienld;
    int n, q, x, y;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int cnt = 0;
        cin >> x >> y;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x && a[i] <= y) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}